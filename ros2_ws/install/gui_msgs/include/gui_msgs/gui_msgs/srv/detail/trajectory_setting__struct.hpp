// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gui_msgs:srv/TrajectorySetting.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__STRUCT_HPP_
#define GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gui_msgs__srv__TrajectorySetting_Request __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__srv__TrajectorySetting_Request __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectorySetting_Request_
{
  using Type = TrajectorySetting_Request_<ContainerAllocator>;

  explicit TrajectorySetting_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = false;
    }
  }

  explicit TrajectorySetting_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = false;
    }
  }

  // field types and members
  using _req_type =
    bool;
  _req_type req;

  // setters for named parameter idiom
  Type & set__req(
    const bool & _arg)
  {
    this->req = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__srv__TrajectorySetting_Request
    std::shared_ptr<gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__srv__TrajectorySetting_Request
    std::shared_ptr<gui_msgs::srv::TrajectorySetting_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectorySetting_Request_ & other) const
  {
    if (this->req != other.req) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectorySetting_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectorySetting_Request_

// alias to use template instance with default allocator
using TrajectorySetting_Request =
  gui_msgs::srv::TrajectorySetting_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gui_msgs


#ifndef _WIN32
# define DEPRECATED__gui_msgs__srv__TrajectorySetting_Response __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__srv__TrajectorySetting_Response __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectorySetting_Response_
{
  using Type = TrajectorySetting_Response_<ContainerAllocator>;

  explicit TrajectorySetting_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool = 0l;
      this->parameters = 0l;
    }
  }

  explicit TrajectorySetting_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__srv__TrajectorySetting_Response
    std::shared_ptr<gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__srv__TrajectorySetting_Response
    std::shared_ptr<gui_msgs::srv::TrajectorySetting_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectorySetting_Response_ & other) const
  {
    if (this->tool != other.tool) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectorySetting_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectorySetting_Response_

// alias to use template instance with default allocator
using TrajectorySetting_Response =
  gui_msgs::srv::TrajectorySetting_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gui_msgs

namespace gui_msgs
{

namespace srv
{

struct TrajectorySetting
{
  using Request = gui_msgs::srv::TrajectorySetting_Request;
  using Response = gui_msgs::srv::TrajectorySetting_Response;
};

}  // namespace srv

}  // namespace gui_msgs

#endif  // GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__STRUCT_HPP_
