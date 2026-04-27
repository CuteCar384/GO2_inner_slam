# start_go2_slam_nav2.sh

启动 Go2 的 SLAM + Nav2，用于边建 2D 地图边导航。

## 用法

只启动 SLAM/Nav2：

```bash
./start_go2_slam_nav2.sh
```

同时启动点云建图：

```bash
./start_go2_slam_nav2.sh --mapping
```

查看帮助：

```bash
./start_go2_slam_nav2.sh --help
```

## 会启动什么

```text
Go2 driver
robot_localization
点云转 LaserScan
slam_toolbox
Nav2
RViz
```

加 `--mapping` 时，还会启动：

```text
go2_mapping_only/mapping_only.launch.py
```

用于生成 `/go2_built_map` 点云地图，之后可用 `save_pointcloud.sh` 保存。

## 适用场景

```text
第一次建图
边走边生成 2D map
需要同时保存点云图时加 --mapping
```

## 注意

需要图形界面，因为脚本会启动 RViz。

如果只是用已有地图导航，不要用这个脚本，使用：

```bash
./start_go2_nav2_localization.sh
```
