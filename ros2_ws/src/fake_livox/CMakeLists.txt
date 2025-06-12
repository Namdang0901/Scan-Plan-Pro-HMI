cmake_minimum_required(VERSION 3.8)
project(fake_livox_publisher)

# Find required packages
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(PCL REQUIRED COMPONENTS io)
find_package(pcl_conversions REQUIRED)
find_package(pcl_msgs REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})

# Create the executable
add_executable(fake_livox src/fake_livox.cpp)

# Link dependencies
ament_target_dependencies(fake_livox
  rclcpp
  sensor_msgs
  pcl_conversions
)

target_link_libraries(fake_livox
  ${PCL_LIBRARIES}
)

# Install the executable
install(TARGETS
  fake_livox
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
