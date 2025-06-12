// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__STRUCT_HPP_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rviz_cloud_annotation__msg__RectangleSelectionViewport __attribute__((deprecated))
#else
# define DEPRECATED__rviz_cloud_annotation__msg__RectangleSelectionViewport __declspec(deprecated)
#endif

namespace rviz_cloud_annotation
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RectangleSelectionViewport_
{
  using Type = RectangleSelectionViewport_<ContainerAllocator>;

  explicit RectangleSelectionViewport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_x = 0ul;
      this->start_y = 0ul;
      this->end_x = 0ul;
      this->end_y = 0ul;
      this->viewport_height = 0ul;
      this->viewport_width = 0ul;
      this->focal_length = 0.0f;
      std::fill<typename std::array<float, 16>::iterator, float>(this->projection_matrix.begin(), this->projection_matrix.end(), 0.0f);
      this->is_deep_selection = false;
    }
  }

  explicit RectangleSelectionViewport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : projection_matrix(_alloc),
    camera_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_x = 0ul;
      this->start_y = 0ul;
      this->end_x = 0ul;
      this->end_y = 0ul;
      this->viewport_height = 0ul;
      this->viewport_width = 0ul;
      this->focal_length = 0.0f;
      std::fill<typename std::array<float, 16>::iterator, float>(this->projection_matrix.begin(), this->projection_matrix.end(), 0.0f);
      this->is_deep_selection = false;
    }
  }

  // field types and members
  using _start_x_type =
    uint32_t;
  _start_x_type start_x;
  using _start_y_type =
    uint32_t;
  _start_y_type start_y;
  using _end_x_type =
    uint32_t;
  _end_x_type end_x;
  using _end_y_type =
    uint32_t;
  _end_y_type end_y;
  using _viewport_height_type =
    uint32_t;
  _viewport_height_type viewport_height;
  using _viewport_width_type =
    uint32_t;
  _viewport_width_type viewport_width;
  using _focal_length_type =
    float;
  _focal_length_type focal_length;
  using _projection_matrix_type =
    std::array<float, 16>;
  _projection_matrix_type projection_matrix;
  using _camera_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _camera_pose_type camera_pose;
  using _is_deep_selection_type =
    bool;
  _is_deep_selection_type is_deep_selection;
  using _polyline_x_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _polyline_x_type polyline_x;
  using _polyline_y_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _polyline_y_type polyline_y;

  // setters for named parameter idiom
  Type & set__start_x(
    const uint32_t & _arg)
  {
    this->start_x = _arg;
    return *this;
  }
  Type & set__start_y(
    const uint32_t & _arg)
  {
    this->start_y = _arg;
    return *this;
  }
  Type & set__end_x(
    const uint32_t & _arg)
  {
    this->end_x = _arg;
    return *this;
  }
  Type & set__end_y(
    const uint32_t & _arg)
  {
    this->end_y = _arg;
    return *this;
  }
  Type & set__viewport_height(
    const uint32_t & _arg)
  {
    this->viewport_height = _arg;
    return *this;
  }
  Type & set__viewport_width(
    const uint32_t & _arg)
  {
    this->viewport_width = _arg;
    return *this;
  }
  Type & set__focal_length(
    const float & _arg)
  {
    this->focal_length = _arg;
    return *this;
  }
  Type & set__projection_matrix(
    const std::array<float, 16> & _arg)
  {
    this->projection_matrix = _arg;
    return *this;
  }
  Type & set__camera_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->camera_pose = _arg;
    return *this;
  }
  Type & set__is_deep_selection(
    const bool & _arg)
  {
    this->is_deep_selection = _arg;
    return *this;
  }
  Type & set__polyline_x(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->polyline_x = _arg;
    return *this;
  }
  Type & set__polyline_y(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->polyline_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_cloud_annotation__msg__RectangleSelectionViewport
    std::shared_ptr<rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_cloud_annotation__msg__RectangleSelectionViewport
    std::shared_ptr<rviz_cloud_annotation::msg::RectangleSelectionViewport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RectangleSelectionViewport_ & other) const
  {
    if (this->start_x != other.start_x) {
      return false;
    }
    if (this->start_y != other.start_y) {
      return false;
    }
    if (this->end_x != other.end_x) {
      return false;
    }
    if (this->end_y != other.end_y) {
      return false;
    }
    if (this->viewport_height != other.viewport_height) {
      return false;
    }
    if (this->viewport_width != other.viewport_width) {
      return false;
    }
    if (this->focal_length != other.focal_length) {
      return false;
    }
    if (this->projection_matrix != other.projection_matrix) {
      return false;
    }
    if (this->camera_pose != other.camera_pose) {
      return false;
    }
    if (this->is_deep_selection != other.is_deep_selection) {
      return false;
    }
    if (this->polyline_x != other.polyline_x) {
      return false;
    }
    if (this->polyline_y != other.polyline_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const RectangleSelectionViewport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RectangleSelectionViewport_

// alias to use template instance with default allocator
using RectangleSelectionViewport =
  rviz_cloud_annotation::msg::RectangleSelectionViewport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rviz_cloud_annotation

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__STRUCT_HPP_
