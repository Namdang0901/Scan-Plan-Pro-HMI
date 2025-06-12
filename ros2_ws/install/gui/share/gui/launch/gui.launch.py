from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Node 1: Your custom PCD publisher
        Node(
            package='pcd_visualizer',    # 🔁 Replace with your package name
            executable='pcd_publisher',     # 🔁 Replace with your executable name
            name='pcd_publisher',
            output='screen',
        ),

        # Node 2: RViz2 with optional config
        Node(
            package='gui',
            executable='gui',
            name='gui',
            output='screen',
        ),
        Node(
            package='pointcloud_marker',
            executable='pointcloud_marker_node',
            name='pointcloud_marker_node',
            output='screen'
        ),
        Node(
            package='zivid_samples',
            executable='sample_capture_cpp',
            name='sample_capture_cpp',
            output='screen'
        ),
        Node(
            package='zivid_camera',
            executable='zivid_camera',
            name='zivid_camera',
            output='screen',
            parameters=[
                {'camera_model': 'file_camera'},
                {'file_camera_path': '/home/hoapham/ros2_ws/FileCameraZivid2M70.zfc'},
            ]
        ),
    ])
