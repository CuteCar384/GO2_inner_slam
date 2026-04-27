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
sudo docker exec -it jazzy /bin/bash
apt-get update # 建议提前更换国内镜像
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

# 容器/home/unitree内 clone 项目后，执行以下命令完成环境准备
# 本项目所有包都提前在GO2 EDU内部同docker环境进行过编译, 可直接激活
cd GO2_inner_slam/
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
