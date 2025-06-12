cmake_minimum_required(VERSION 3.14)
project(ur16_control_ui)

# Default to C++14
set(CMAKE_CXX_STANDARD 14)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_common REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_srvs REQUIRED)

# Include header files
include_directories(include)

# Build executable
add_executable(ur16_control_ui src/ur16_control_ui_node.cpp)
ament_target_dependencies(ur16_control_ui
  rclcpp
  moveit_ros_planning_interface
  moveit_common
  tf2_geometry_msgs
  geometry_msgs
  std_srvs
)

# Install executable
install(TARGETS ur16_control_ui
  DESTINATION lib/${PROJECT_NAME}
)

# Install header files
install(
  DIRECTORY include/
  DESTINATION include
)

# Install config files (nếu có)

install(DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}/
)
# Export include directories
ament_export_include_directories(include)

# Export package
ament_package()
