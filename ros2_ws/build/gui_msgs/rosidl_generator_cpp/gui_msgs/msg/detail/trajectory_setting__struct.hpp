// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gui_msgs:msg/TrajectorySetting.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__STRUCT_HPP_
#define GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gui_msgs__msg__TrajectorySetting __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__msg__TrajectorySetting __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectorySetting_
{
  using Type = TrajectorySetting_<ContainerAllocator>;

  explicit TrajectorySetting_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool = 0l;
      this->parameters = 0l;
    }
  }

  explicit TrajectorySetting_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool = 0l;
      this->parameters = 0l;
    }
  }

  // field types and members
  using _tool_type =
    int32_t;
  _tool_type tool;
  using _parameters_type =
    int32_t;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__tool(
    const int32_t & _arg)
  {
    this->tool = _arg;
    return *this;
  }
  Type & set__parameters(
    const int32_t & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gui_msgs::msg::TrajectorySetting_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::msg::TrajectorySetting_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::msg::TrajectorySetting_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::msg::TrajectorySetting_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::msg::TrajectorySetting_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::msg::TrajectorySetting_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::msg::TrajectorySetting_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::msg::TrajectorySetting_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::msg::TrajectorySetting_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::msg::TrajectorySetting_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__msg__TrajectorySetting
    std::shared_ptr<gui_msgs::msg::TrajectorySetting_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__msg__TrajectorySetting
    std::shared_ptr<gui_msgs::msg::TrajectorySetting_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectorySetting_ & other) const
  {
    if (this->tool != other.tool) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectorySetting_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectorySetting_

// alias to use template instance with default allocator
using TrajectorySetting =
  gui_msgs::msg::TrajectorySetting_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gui_msgs

#endif  // GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__STRUCT_HPP_
