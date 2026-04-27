# Go2 SLAM (注意所有操作都在GO2扩展坞(仅支持GO2 EDU版本)进行)

项目根目录下的 Shell 脚本用于管理 Go2 机器狗的 SLAM 与导航。

---

## 环境配置

### Docker 环境

```bash
# 安装 fishros
wget http://fishros.com/install -O fishros && bash fishros

# 选择 11 安装 docker 的 jazzy，选择 host 模式，命名为 jazzy
# 进入容器
xhost +
docker exec -it jazzy /bin/bash

# 容器内 clone 项目后，执行以下命令完成环境准备
cd GO2_inner_slam/
source install/setup.bash
```

### 前置条件

- ROS 2 Jazzy (`/opt/ros/jazzy/setup.bash`)
- Unitree ROS 2 消息包已编译并 source (`unitree_ros2/install/setup.bash`)
- 需要图形界面环境（`DISPLAY` 或 `WAYLAND_DISPLAY`），用于启动 RViz

以下依赖需要在 `jazzy` 容器内部安装：

```bash
apt-get update
apt-get install -y \
  python3-colcon-common-extensions \
  ros-jazzy-navigation2 \
  ros-jazzy-nav2-bringup \
  ros-jazzy-slam-toolbox \
  ros-jazzy-robot-localization \
  ros-jazzy-rviz2 \
  ros-jazzy-pcl-ros \
  ros-jazzy-pcl-conversions \
  ros-jazzy-laser-geometry \
  ros-jazzy-tf2-sensor-msgs \
  ros-jazzy-xacro \
  ros-jazzy-robot-state-publisher \
  ros-jazzy-joint-state-publisher
```

其中：

- `ros-jazzy-pcl-ros`、`ros-jazzy-pcl-conversions`：点云建图包 `go2_mapping_only` 编译需要。
- `ros-jazzy-rviz2`：启动脚本默认会打开 RViz；如果容器内未安装，会出现 `rviz2: command not found`。
- `ros-jazzy-navigation2`、`ros-jazzy-nav2-bringup`：Nav2 导航栈，包含 planner、controller、behavior、lifecycle 等导航组件。
- `ros-jazzy-slam-toolbox`：SLAM 模式下发布 `/map` 和 `map -> odom` 变换。
- `ros-jazzy-robot-localization`：EKF 融合里程计/IMU，提供导航所需的定位数据。

安装完成后，在容器内编译：

```bash
cd /home/unitree/go2slam
source /opt/ros/jazzy/setup.bash
source unitree_ros2/install/setup.bash
colcon build
source install/setup.bash
```

---

## 启动脚本

| 脚本 | 说明 |
|------|------|
| `start_go2_slam_nav2.sh` | 建图主脚本，启动 SLAM 模式的 Nav2 导航<br>`./start_go2_slam_nav2.sh` 或加 `--mapping` 同时启动点云建图<br>加 `--no-rviz` 可跳过 RViz |
| `start_go2_nav2_localization.sh` | 此脚本也直接使用，./start_go2_nav2_localization.sh，默认使用maps和output目录下最新文件（output目录下的pcd点云用来初始化重定位，若上次建图没有保存点云则本次无法重定位，使用已有地图启动 AMCL 定位模式<br>`./start_go2_nav2_localization.sh [maps/xxx.yaml] [output/xxx.pcd]`<br>加 `--no-rviz` 可跳过 RViz |

---

## 建图脚本(必须先启动start_go2_slam_nav2.sh脚本才可以，start_go2_slam_nav2.sh --mapping则额外建立点云地图)

| 脚本 | 说明 |
|------|------|
| `save_2dmap.sh` | 将 `/map` 话题保存为 2D 地图（`maps/map.yaml` + `maps/map.pgm`） |
| `save_pointcloud.sh` | 订阅 `/go2_built_map` 保存 3D 点云到 `output/go2_built_map_*.pcd` |

---

## 工具脚本

| 脚本 | 说明 |
|------|------|
| `get_go2_map_pose.sh` | 查询或发送导航目标<br>`./get_go2_map_pose.sh` 查看当前位置<br>`./get_go2_map_pose.sh forward 3 --send` 向前移动3米并发送 Nav2 目标 |
| `kill_all_ros2.sh` | 清理所有 ROS2 相关进程<br>`./kill_all_ros2.sh` 优雅终止，或加 `--force` 直接杀死 |
