// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gui_msgs:msg/AutoProcess.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__STRUCT_HPP_
#define GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gui_msgs__msg__AutoProcess __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__msg__AutoProcess __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoProcess_
{
  using Type = AutoProcess_<ContainerAllocator>;

  explicit AutoProcess_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = false;
    }
  }

  explicit AutoProcess_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = false;
    }
  }

  // field types and members
  using _res_type =
    bool;
  _res_type res;

  // setters for named parameter idiom
  Type & set__res(
    const bool & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gui_msgs::msg::AutoProcess_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::msg::AutoProcess_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::msg::AutoProcess_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::msg::AutoProcess_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::msg::AutoProcess_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::msg::AutoProcess_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::msg::AutoProcess_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::msg::AutoProcess_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::msg::AutoProcess_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::msg::AutoProcess_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__msg__AutoProcess
    std::shared_ptr<gui_msgs::msg::AutoProcess_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__msg__AutoProcess
    std::shared_ptr<gui_msgs::msg::AutoProcess_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoProcess_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoProcess_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoProcess_

// alias to use template instance with default allocator
using AutoProcess =
  gui_msgs::msg::AutoProcess_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gui_msgs

#endif  // GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__STRUCT_HPP_
