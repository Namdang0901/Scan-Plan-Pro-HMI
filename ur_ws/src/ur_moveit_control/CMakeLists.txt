cmake_minimum_required(VERSION 3.10)
project(ur_moveit_control)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_ros_planning REQUIRED)


add_executable(move_joint src/move_joint.cpp)
ament_target_dependencies(move_joint rclcpp moveit_ros_planning_interface moveit_ros_planning)


install(TARGETS move_joint DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

ament_package()
