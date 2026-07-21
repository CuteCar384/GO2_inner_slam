# 前置准备
进入https://www.nomachine.com/安装nomachine软件。
开一个cmd，ssh unitree@192.168.123.18（或热点IP）, 选择1进入foxy， 执行./nomachine.sh  ， 输入sudo密码123
此时打开nomachine，左上角add ，add connection， name字段自拟。 host字段192.168.123.18（或者wifi的IP，前提是机器狗确实连接了同一个热点）
其他字段不用动，add完毕。
然后此时直接双击打开添加好的配置，用户名和密码unitree/123, 一路OK即可进入GO2扩展坞桌面系统。  此时后续传文件不用scp指令，可以直接从WINDOWS拖拽到桌面中。
nomachine中按下ctrl+alt+0, 选择display，选择resize模式（第三个），此时将变成正常分辨率。



# Go2 SLAM (注意所有操作都在GO2扩展坞(仅支持GO2 EDU版本)进行)

项目根目录下的 Shell 脚本用于管理 Go2 机器狗的 SLAM 与导航。

---
## 环境配置
### 1、扩展坞内环境
```bash
# 配置国内镜像（option）
sudo sed -i.bak 's|http://.*.ubuntu.com|http://mirrors.aliyun.com|g' /etc/apt/sources.list && sudo apt update
sudo apt install wget

# 安装 fishros ( 此时处于扩展坞内，非docker容器内，脚本内交互时可选更换国内镜像, 优选中科大镜像）
# 选择 11 安装 docker 的 jazzy，命名为 jazzy, 选择 host 模式，选择VSCODE插件+
wget http://fishros.com/install -O fishros && bash fishros
# 进入容器
xhost +
sudo docker exec -it jazzy /bin/bash (此时进入docker容器内部，可以继续执行2部分）
```

### 2、Docker容器内 环境
```bash
# 配置国内镜像安装wget
sed -i 's/deb.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list && \
sed -i 's/security.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list
# 更新索引并安装 wget
apt-get update && apt-get install -y wget
wget http://fishros.com/install -O fishros && bash fishros  ( 此时选择5,切换系统镜像以及ROS源，使用自动测速配置，选择中科大镜像源)
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

# clone项目（这一步有问题和我说）
cd /home/unitree/
git clone https://github.com/CuteCar384/GO2_inner_slam.git
# 本项目所有包都提前在GO2 EDU内部同docker环境进行过编译
cd GO2_inner_slam/
# 不要不要不要不要source install/setup.bash，直接使用目录下的脚本即可，往下看
```


---

## 启动脚本

| 脚本 | 说明 |
|------|------|
| `start_go2_slam_nav2.sh` | （首次启动）建图主脚本，启动 SLAM 模式的 Nav2 导航<br>`./start_go2_slam_nav2.sh` 或加 `--mapping` 同时启动点云建图<br>加 `--no-rviz` 可跳过 RViz |
| `start_go2_nav2_localization.sh` | （当有2d地图+点云被保存后使用）此脚本也直接使用，./start_go2_nav2_localization.sh，默认使用maps和output目录下最新文件（output目录下的pcd点云用来初始化重定位，若上次建图没有保存点云则本次无法重定位，使用已有地图启动 AMCL 定位模式<br>`./start_go2_nav2_localization.sh [maps/xxx.yaml] [output/xxx.pcd]`<br>加 `--no-rviz` 可跳过 RViz |

---

## 地图保存脚本(必须先启动start_go2_slam_nav2.sh脚本才可以，start_go2_slam_nav2.sh --mapping则额外建立点云地图)

| 脚本 | 说明 |
|------|------|
| `save_2dmap.sh` | 将 `/map` 话题保存为 2D 地图（`maps/map.yaml` + `maps/map.pgm`） |
| `save_pointcloud.sh` | 订阅 `/go2_built_map` 保存 3D 点云到 `output/go2_built_map_*.pcd` |

---

## 工具脚本

| 脚本 | 说明 |
|------|------|
| `get_go2_map_pose.sh` | 查询、保存、复用或发送导航目标<br>`./get_go2_map_pose.sh` 查看当前位置<br>`./get_go2_map_pose.sh save home` 追加保存当前 Pose 到 `poses.json`<br>`./get_go2_map_pose.sh list` 查看已保存 Pose<br>`./get_go2_map_pose.sh send home` 导航到最新的 `home` Pose<br>`./get_go2_map_pose.sh send --index 3` 按序号导航到历史 Pose<br>`./get_go2_map_pose.sh goto 1.2 -0.8 90 --send` 直接发送绝对 map 坐标<br>`./get_go2_map_pose.sh forward 3 --send` 向前移动3米并发送 Nav2 目标 |
| `kill_all_ros2.sh` | 清理所有 ROS2 相关进程<br>`./kill_all_ros2.sh` 优雅终止，或加 `--force` 直接杀死 |

### `get_go2_map_pose.sh` 常用流程

先启动定位或建图导航：

```bash
./start_go2_nav2_localization.sh
# 或
./start_go2_slam_nav2.sh
```

保存当前位置为可复用 Pose：

```bash
./get_go2_map_pose.sh save home
./get_go2_map_pose.sh save charger
```

所有 Pose 会追加保存到项目根目录的 `poses.json`，同名保存不会覆盖旧记录。

查看并复用已保存 Pose：

```bash
./get_go2_map_pose.sh list
./get_go2_map_pose.sh send home
./get_go2_map_pose.sh send --index 3
```

直接发送绝对地图坐标：

```bash
./get_go2_map_pose.sh goto 1.2 -0.8 90 --send
```

不加 `--send` 时只打印目标点，不会让机器狗移动。
