from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pointcloud_marker',
            executable='pointcloud_marker_node',
            name='pointcloud_marker_node',
            output='screen'
        )
    ])

