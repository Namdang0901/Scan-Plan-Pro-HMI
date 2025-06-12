cmake_minimum_required(VERSION 3.10)
project(add_collision_object)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(geometry_msgs REQUIRED)

include_directories(include)

add_executable(add_collision_object_node
  src/main.cpp
  src/add_collision_object.cpp
)

ament_target_dependencies(add_collision_object_node
  rclcpp
  moveit_ros_planning_interface
  geometry_msgs
)

install(TARGETS add_collision_object_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include/
)

ament_package()
