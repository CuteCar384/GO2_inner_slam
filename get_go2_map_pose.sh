#!/usr/bin/env bash
# 获取机器狗在 map 坐标系下的位置，或基于当前位置发送一个简单的 Nav2 目标。
#
# 用法:
#   ./get_go2_map_pose.sh
#   ./get_go2_map_pose.sh --watch
#   ./get_go2_map_pose.sh forward 3
#   ./get_go2_map_pose.sh forward 3 --send
#   ./get_go2_map_pose.sh map-x 3 --send
#   ./get_go2_map_pose.sh save home
#   ./get_go2_map_pose.sh list
#   ./get_go2_map_pose.sh send home
#   ./get_go2_map_pose.sh send --index 3
#   ./get_go2_map_pose.sh goto 1.2 -0.8 90 --send

set -eo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROS_SETUP="/opt/ros/jazzy/setup.bash"
WS_SETUP="$ROOT_DIR/install/setup.bash"
NEED_ROS=true

for arg in "$@"; do
  case "${arg}" in
    -h|--help)
      NEED_ROS=false
      break
      ;;
    list)
      NEED_ROS=false
      break
      ;;
    -*)
      ;;
    *)
      break
      ;;
  esac
done

configure_cyclonedds_participant_limit() {
  local max_auto_participant_index=100

  if [[ "${RMW_IMPLEMENTATION:-}" != "rmw_cyclonedds_cpp" && -z "${CYCLONEDDS_URI:-}" ]]; then
    return
  fi

  if [[ -z "${CYCLONEDDS_URI:-}" ]]; then
    export CYCLONEDDS_URI="<CycloneDDS><Domain><Discovery><ParticipantIndex>auto</ParticipantIndex><MaxAutoParticipantIndex>${max_auto_participant_index}</MaxAutoParticipantIndex></Discovery></Domain></CycloneDDS>"
    return
  fi

  if [[ "${CYCLONEDDS_URI}" == *"MaxAutoParticipantIndex"* ]]; then
    return
  fi

  if [[ "${CYCLONEDDS_URI}" == "<CycloneDDS"* && "${CYCLONEDDS_URI}" == *"</Discovery>"* ]]; then
    local discovery_close="</Discovery>"
    local discovery_with_limit="<ParticipantIndex>auto</ParticipantIndex><MaxAutoParticipantIndex>${max_auto_participant_index}</MaxAutoParticipantIndex></Discovery>"
    export CYCLONEDDS_URI="${CYCLONEDDS_URI/$discovery_close/$discovery_with_limit}"
    return
  fi

  echo "Warning: CYCLONEDDS_URI is set but could not be patched automatically. If this script fails with participant index errors, add MaxAutoParticipantIndex=${max_auto_participant_index} to the CycloneDDS config." >&2
}

if [[ "${NEED_ROS}" == "true" ]]; then
  if [[ ! -f "${ROS_SETUP}" ]]; then
    echo "Missing ROS setup: ${ROS_SETUP}" >&2
    exit 1
  fi

  if [[ ! -f "${WS_SETUP}" ]]; then
    echo "Missing workspace setup: ${WS_SETUP}" >&2
    echo "Build the workspace first: colcon build" >&2
    exit 1
  fi

  source "${ROS_SETUP}"
  source "${WS_SETUP}"
  configure_cyclonedds_participant_limit
fi
export GO2_POSE_STORE_DEFAULT="${ROOT_DIR}/poses.json"

set -u

if [[ "${GO2_SHOW_DDS_WARNINGS:-0}" != "1" ]]; then
  exec 2> >(grep -v "Failed to parse type hash" >&2)
fi

python3 - "$@" <<'PY'
import argparse
import datetime
import json
import math
import os
import sys
import time
import types
from pathlib import Path

try:
    import rclpy
    from rclpy.action import ActionClient
    from rclpy.node import Node
    from tf2_ros import Buffer, TransformException, TransformListener
except ImportError:
    rclpy = None
    ActionClient = None
    Buffer = None
    TransformListener = None
    TransformException = Exception
    Node = object


def yaw_from_quaternion(q):
    siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
    return math.atan2(siny_cosp, cosy_cosp)


def quaternion_from_yaw(yaw):
    q = types.SimpleNamespace(x=0.0, y=0.0, z=0.0, w=1.0)
    q.z = math.sin(yaw * 0.5)
    q.w = math.cos(yaw * 0.5)
    return q


def quaternion_dict_from_yaw(yaw):
    q = quaternion_from_yaw(yaw)
    return {"x": q.x, "y": q.y, "z": q.z, "w": q.w}


def build_pose_record(name, x, y, z, yaw, frame_id, base_frame):
    return {
        "name": name,
        "saved_at": datetime.datetime.now(datetime.timezone.utc).isoformat(),
        "frame_id": frame_id,
        "base_frame": base_frame,
        "position": {"x": x, "y": y, "z": z},
        "orientation": quaternion_dict_from_yaw(yaw),
        "yaw_rad": yaw,
        "yaw_deg": math.degrees(yaw),
    }


def load_pose_store(path):
    path = Path(path)
    if not path.exists():
        return {"version": 1, "poses": []}

    with path.open("r", encoding="utf-8") as f:
        data = json.load(f)

    if not isinstance(data, dict) or not isinstance(data.get("poses"), list):
        raise RuntimeError(f"Pose 文件格式错误: {path}")
    data.setdefault("version", 1)
    return data


def save_pose_store(path, data):
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    tmp_path = path.with_suffix(path.suffix + ".tmp")
    with tmp_path.open("w", encoding="utf-8") as f:
        json.dump(data, f, ensure_ascii=False, indent=2)
        f.write("\n")
    tmp_path.replace(path)


def append_pose_record(path, record):
    data = load_pose_store(path)
    data["poses"].append(record)
    save_pose_store(path, data)
    return len(data["poses"])


def select_pose_record(path, name, index):
    poses = load_pose_store(path)["poses"]
    if index is not None:
        if index < 1 or index > len(poses):
            raise RuntimeError(f"Pose index 超出范围: {index}，当前共有 {len(poses)} 条")
        return poses[index - 1]

    if not name:
        raise RuntimeError("请指定 Pose 名称，或使用 --index N")

    matches = [pose for pose in poses if pose.get("name") == name]
    if not matches:
        raise RuntimeError(f"找不到名为 {name!r} 的 Pose")
    return matches[-1]


def pose_record_to_goal(record):
    position = record["position"]
    if "yaw_rad" in record:
        yaw = float(record["yaw_rad"])
    else:
        yaw = yaw_from_quaternion(type("Q", (), record["orientation"])())
    return (
        str(record.get("frame_id", "map")),
        float(position["x"]),
        float(position["y"]),
        float(position.get("z", 0.0)),
        yaw,
    )


def print_pose_record(index, record):
    frame_id, x, y, z, yaw = pose_record_to_goal(record)
    print(
        f"[{index}] {record.get('name', '')}: frame={frame_id} "
        f"x={x:.3f} y={y:.3f} z={z:.3f} yaw={math.degrees(yaw):.1f}deg "
        f"saved_at={record.get('saved_at', '')}"
    )


class MapPoseTool(Node):
    def __init__(self, fixed_frame, base_frame):
        if rclpy is None:
            raise RuntimeError("缺少 ROS2 Python 环境，请先进入/配置 ROS Jazzy 环境")
        super().__init__("go2_map_pose_tool")
        self.fixed_frame = fixed_frame
        self.base_frame = base_frame
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

    def lookup_pose(self, timeout_sec):
        deadline = time.monotonic() + timeout_sec
        last_error = None
        while rclpy.ok() and time.monotonic() < deadline:
            rclpy.spin_once(self, timeout_sec=0.1)
            try:
                tf = self.tf_buffer.lookup_transform(
                    self.fixed_frame,
                    self.base_frame,
                    rclpy.time.Time(seconds=0, nanoseconds=0),
                )
                t = tf.transform.translation
                yaw = yaw_from_quaternion(tf.transform.rotation)
                return t.x, t.y, t.z, yaw
            except TransformException as exc:
                last_error = exc

        raise RuntimeError(
            f"无法获取 TF: {self.fixed_frame} -> {self.base_frame}. "
            f"请确认 Nav2/SLAM/localization 已启动，且 TF 链路正常。最后错误: {last_error}"
        )

    def send_nav_goal(self, x, y, yaw, timeout_sec, frame_id=None):
        try:
            from nav2_msgs.action import NavigateToPose
        except ImportError as exc:
            raise RuntimeError("缺少 nav2_msgs，无法发送 NavigateToPose action") from exc

        client = ActionClient(self, NavigateToPose, "navigate_to_pose")
        if not client.wait_for_server(timeout_sec=timeout_sec):
            raise RuntimeError("找不到 /navigate_to_pose action server，请确认 bt_navigator 已 active")

        goal = NavigateToPose.Goal()
        goal.pose.header.frame_id = frame_id or self.fixed_frame
        goal.pose.header.stamp = self.get_clock().now().to_msg()
        goal.pose.pose.position.x = x
        goal.pose.pose.position.y = y
        goal.pose.pose.position.z = 0.0
        orientation = quaternion_from_yaw(yaw)
        goal.pose.pose.orientation.x = orientation.x
        goal.pose.pose.orientation.y = orientation.y
        goal.pose.pose.orientation.z = orientation.z
        goal.pose.pose.orientation.w = orientation.w

        future = client.send_goal_async(goal)
        rclpy.spin_until_future_complete(self, future)
        handle = future.result()
        if handle is None or not handle.accepted:
            raise RuntimeError("Nav2 拒绝了目标点")

        print(f"已发送 Nav2 目标: frame={goal.pose.header.frame_id} x={x:.3f} y={y:.3f} yaw={math.degrees(yaw):.1f}deg")


def build_parser():
    parser = argparse.ArgumentParser(
        description="读取 Go2 在 map 坐标系下的位置，保存 Pose，并发送 Nav2 目标。"
    )
    parser.add_argument(
        "command",
        nargs="?",
        choices=("pose", "forward", "map-x", "map-y", "save", "list", "send", "goto"),
        default="pose",
        help="pose=打印当前位置；save=追加保存当前 Pose；list=列出 Pose；send=发送已保存 Pose；goto=绝对坐标；forward/map-x/map-y=相对移动",
    )
    parser.add_argument("values", nargs="*", help="命令参数")
    parser.add_argument("--send", action="store_true", help="发送 Nav2 NavigateToPose 目标")
    parser.add_argument("--index", type=int, help="按 poses.json 中的 1-based index 选择 Pose")
    parser.add_argument(
        "--pose-file",
        default=os.environ.get("GO2_POSE_STORE_DEFAULT", "poses.json"),
        help="Pose JSON 文件，默认项目根目录 poses.json",
    )
    parser.add_argument("--watch", action="store_true", help="持续打印当前位置")
    parser.add_argument("--rate", type=float, default=1.0, help="--watch 打印频率 Hz")
    parser.add_argument("--fixed-frame", default="map", help="默认 map")
    parser.add_argument("--base-frame", default="base_footprint", help="默认 base_footprint")
    parser.add_argument("--timeout", type=float, default=5.0, help="等待 TF/action 的超时时间")
    return parser


def print_pose(x, y, z, yaw, fixed_frame, base_frame):
    print(
        f"{base_frame} in {fixed_frame}: "
        f"x={x:.3f} m, y={y:.3f} m, z={z:.3f} m, "
        f"yaw={math.degrees(yaw):.1f} deg"
    )


def main(argv):
    args = build_parser().parse_args(argv)
    if args.command in ("forward", "map-x", "map-y") and len(args.values) != 1:
        raise SystemExit(f"{args.command} 需要距离参数，例如: ./get_go2_map_pose.sh {args.command} 3")
    if args.command == "save" and len(args.values) > 1:
        raise SystemExit("save 最多接受一个名称，例如: ./get_go2_map_pose.sh save home")
    if args.command == "send" and len(args.values) > 1:
        raise SystemExit("send 最多接受一个名称，例如: ./get_go2_map_pose.sh send home")
    if args.command == "goto" and len(args.values) not in (2, 3):
        raise SystemExit("goto 需要 x y [yaw_deg]，例如: ./get_go2_map_pose.sh goto 1.2 -0.8 90 --send")

    if args.command == "list":
        poses = load_pose_store(args.pose_file)["poses"]
        if not poses:
            print(f"暂无保存的 Pose: {args.pose_file}")
            return
        for index, record in enumerate(poses, start=1):
            print_pose_record(index, record)
        return

    rclpy.init()
    node = MapPoseTool(args.fixed_frame, args.base_frame)
    try:
        if args.watch:
            period = 1.0 / max(args.rate, 0.1)
            while rclpy.ok():
                pose = node.lookup_pose(args.timeout)
                print_pose(*pose, args.fixed_frame, args.base_frame)
                time.sleep(period)
            return

        if args.command == "send":
            name = args.values[0] if args.values else None
            record = select_pose_record(args.pose_file, name, args.index)
            frame_id, goal_x, goal_y, goal_z, goal_yaw = pose_record_to_goal(record)
            print_pose_record(args.index or "latest", record)
            node.send_nav_goal(goal_x, goal_y, goal_yaw, args.timeout, frame_id=frame_id)
            return

        if args.command == "goto":
            goal_x = float(args.values[0])
            goal_y = float(args.values[1])
            goal_yaw = math.radians(float(args.values[2])) if len(args.values) == 3 else 0.0
            print(
                f"目标点: frame={args.fixed_frame} "
                f"x={goal_x:.3f} m, y={goal_y:.3f} m, yaw={math.degrees(goal_yaw):.1f} deg"
            )
            if args.send:
                node.send_nav_goal(goal_x, goal_y, goal_yaw, args.timeout)
            else:
                print("仅计算目标点；加 --send 才会发送给 Nav2。")
            return

        x, y, z, yaw = node.lookup_pose(args.timeout)
        print_pose(x, y, z, yaw, args.fixed_frame, args.base_frame)

        if args.command == "pose":
            return

        if args.command == "save":
            name = args.values[0] if args.values else "pose"
            record = build_pose_record(name, x, y, z, yaw, args.fixed_frame, args.base_frame)
            index = append_pose_record(args.pose_file, record)
            print(f"已追加保存 Pose 到 {args.pose_file}: index={index} name={name}")
            return

        if args.command == "forward":
            distance = float(args.values[0])
            goal_x = x + distance * math.cos(yaw)
            goal_y = y + distance * math.sin(yaw)
        elif args.command == "map-x":
            goal_x = x + float(args.values[0])
            goal_y = y
        else:
            goal_x = x
            goal_y = y + float(args.values[0])

        print(
            f"目标点: frame={args.fixed_frame} "
            f"x={goal_x:.3f} m, y={goal_y:.3f} m, yaw={math.degrees(yaw):.1f} deg"
        )

        if args.send:
            node.send_nav_goal(goal_x, goal_y, yaw, args.timeout)
        else:
            print("仅计算目标点；加 --send 才会发送给 Nav2。")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main(sys.argv[1:])
PY
