import os
import time
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, OpaqueFunction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node


def launch_after_robot_description(context, *args, **kwargs):
    import rclpy
    from rclpy.node import Node as RclpyNode

    rclpy.init()

    class TempNode(RclpyNode):
        def __init__(self):
            super().__init__('wait_for_robot_description')

    node = TempNode()

    timeout = 20.0
    start_time = time.time()
    found = False

    while time.time() - start_time < timeout:
        desc = node.get_parameter_or("robot_description", None)
        if desc and desc.value:
            found = True
            node.get_logger().info("Found 'robot_description' parameter.")
            break
        node.get_logger().info("Waiting for 'robot_description'...")
        time.sleep(0.5)

    if not found:
        node.get_logger().warn("Timeout waiting for 'robot_description'.")

    node.destroy_node()
    rclpy.shutdown()

    return [
        Node(
            package='ur16_control_ui',
            executable='ur16_control_ui',
            name='ur16_control_ui',
            output='screen'
        ),
        Node(
            package='add_collision_object',
            executable='add_collision_object_node',
            name='add_collision_object_node',
            output='screen'
        )
    ]


def generate_launch_description():
    ur_sim_gazebo_dir = get_package_share_directory('ur_simulation_gazebo')

    ur_moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ur_sim_gazebo_dir, 'launch', 'ur_sim_moveit.launch.py')
        ),
        launch_arguments={'ur_type': 'ur16e'}.items()
    )

    wait_for_param_and_start_nodes = OpaqueFunction(function=launch_after_robot_description)

    return LaunchDescription([
        ur_moveit_launch,
        wait_for_param_and_start_nodes
    ])
