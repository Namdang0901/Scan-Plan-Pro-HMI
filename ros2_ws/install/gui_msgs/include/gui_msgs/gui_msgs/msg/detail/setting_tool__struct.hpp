// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gui_msgs:msg/SettingTool.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__SETTING_TOOL__STRUCT_HPP_
#define GUI_MSGS__MSG__DETAIL__SETTING_TOOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gui_msgs__msg__SettingTool __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__msg__SettingTool __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SettingTool_
{
  using Type = SettingTool_<ContainerAllocator>;

  explicit SettingTool_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_rpm = 0l;
      this->feed_rate = 0l;
      this->tool_diameter = 0l;
      this->tool_length = 0l;
      this->tool_pressure = 0l;
      this->sanding = 0l;
      this->dir = 0l;
      this->tooltype = 0l;
      this->toolgeometry = 0l;
    }
  }

  explicit SettingTool_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_rpm = 0l;
      this->feed_rate = 0l;
      this->tool_diameter = 0l;
      this->tool_length = 0l;
      this->tool_pressure = 0l;
      this->sanding = 0l;
      this->dir = 0l;
      this->tooltype = 0l;
      this->toolgeometry = 0l;
    }
  }

  // field types and members
  using _tool_rpm_type =
    int32_t;
  _tool_rpm_type tool_rpm;
  using _feed_rate_type =
    int32_t;
  _feed_rate_type feed_rate;
  using _tool_diameter_type =
    int32_t;
  _tool_diameter_type tool_diameter;
  using _tool_length_type =
    int32_t;
  _tool_length_type tool_length;
  using _tool_pressure_type =
    int32_t;
  _tool_pressure_type tool_pressure;
  using _sanding_type =
    int32_t;
  _sanding_type sanding;
  using _dir_type =
    int32_t;
  _dir_type dir;
  using _tooltype_type =
    int32_t;
  _tooltype_type tooltype;
  using _toolgeometry_type =
    int32_t;
  _toolgeometry_type toolgeometry;

  // setters for named parameter idiom
  Type & set__tool_rpm(
    const int32_t & _arg)
  {
    this->tool_rpm = _arg;
    return *this;
  }
  Type & set__feed_rate(
    const int32_t & _arg)
  {
    this->feed_rate = _arg;
    return *this;
  }
  Type & set__tool_diameter(
    const int32_t & _arg)
  {
    this->tool_diameter = _arg;
    return *this;
  }
  Type & set__tool_length(
    const int32_t & _arg)
  {
    this->tool_length = _arg;
    return *this;
  }
  Type & set__tool_pressure(
    const int32_t & _arg)
  {
    this->tool_pressure = _arg;
    return *this;
  }
  Type & set__sanding(
    const int32_t & _arg)
  {
    this->sanding = _arg;
    return *this;
  }
  Type & set__dir(
    const int32_t & _arg)
  {
    this->dir = _arg;
    return *this;
  }
  Type & set__tooltype(
    const int32_t & _arg)
  {
    this->tooltype = _arg;
    return *this;
  }
  Type & set__toolgeometry(
    const int32_t & _arg)
  {
    this->toolgeometry = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gui_msgs::msg::SettingTool_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::msg::SettingTool_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::msg::SettingTool_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::msg::SettingTool_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::msg::SettingTool_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::msg::SettingTool_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::msg::SettingTool_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::msg::SettingTool_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::msg::SettingTool_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::msg::SettingTool_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__msg__SettingTool
    std::shared_ptr<gui_msgs::msg::SettingTool_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__msg__SettingTool
    std::shared_ptr<gui_msgs::msg::SettingTool_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SettingTool_ & other) const
  {
    if (this->tool_rpm != other.tool_rpm) {
      return false;
    }
    if (this->feed_rate != other.feed_rate) {
      return false;
    }
    if (this->tool_diameter != other.tool_diameter) {
      return false;
    }
    if (this->tool_length != other.tool_length) {
      return false;
    }
    if (this->tool_pressure != other.tool_pressure) {
      return false;
    }
    if (this->sanding != other.sanding) {
      return false;
    }
    if (this->dir != other.dir) {
      return false;
    }
    if (this->tooltype != other.tooltype) {
      return false;
    }
    if (this->toolgeometry != other.toolgeometry) {
      return false;
    }
    return true;
  }
  bool operator!=(const SettingTool_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SettingTool_

// alias to use template instance with default allocator
using SettingTool =
  gui_msgs::msg::SettingTool_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gui_msgs

#endif  // GUI_MSGS__MSG__DETAIL__SETTING_TOOL__STRUCT_HPP_
