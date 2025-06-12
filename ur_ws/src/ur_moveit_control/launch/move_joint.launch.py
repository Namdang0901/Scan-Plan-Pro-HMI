from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ur_moveit_control',
            executable='move_joint',
            output='screen'
        )
    ])
