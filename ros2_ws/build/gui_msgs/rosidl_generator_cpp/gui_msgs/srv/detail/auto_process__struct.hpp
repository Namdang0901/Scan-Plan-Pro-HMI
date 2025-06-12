// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gui_msgs:srv/AutoProcess.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__STRUCT_HPP_
#define GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gui_msgs__srv__AutoProcess_Request __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__srv__AutoProcess_Request __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AutoProcess_Request_
{
  using Type = AutoProcess_Request_<ContainerAllocator>;

  explicit AutoProcess_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = false;
    }
  }

  explicit AutoProcess_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gui_msgs::srv::AutoProcess_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::srv::AutoProcess_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::srv::AutoProcess_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::srv::AutoProcess_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::AutoProcess_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::AutoProcess_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::AutoProcess_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::AutoProcess_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::srv::AutoProcess_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::srv::AutoProcess_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__srv__AutoProcess_Request
    std::shared_ptr<gui_msgs::srv::AutoProcess_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__srv__AutoProcess_Request
    std::shared_ptr<gui_msgs::srv::AutoProcess_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoProcess_Request_ & other) const
  {
    if (this->req != other.req) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoProcess_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoProcess_Request_

// alias to use template instance with default allocator
using AutoProcess_Request =
  gui_msgs::srv::AutoProcess_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gui_msgs


#ifndef _WIN32
# define DEPRECATED__gui_msgs__srv__AutoProcess_Response __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__srv__AutoProcess_Response __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AutoProcess_Response_
{
  using Type = AutoProcess_Response_<ContainerAllocator>;

  explicit AutoProcess_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = false;
    }
  }

  explicit AutoProcess_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gui_msgs::srv::AutoProcess_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::srv::AutoProcess_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::srv::AutoProcess_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::srv::AutoProcess_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::AutoProcess_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::AutoProcess_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::AutoProcess_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::AutoProcess_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::srv::AutoProcess_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::srv::AutoProcess_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__srv__AutoProcess_Response
    std::shared_ptr<gui_msgs::srv::AutoProcess_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__srv__AutoProcess_Response
    std::shared_ptr<gui_msgs::srv::AutoProcess_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoProcess_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoProcess_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoProcess_Response_

// alias to use template instance with default allocator
using AutoProcess_Response =
  gui_msgs::srv::AutoProcess_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gui_msgs

namespace gui_msgs
{

namespace srv
{

struct AutoProcess
{
  using Request = gui_msgs::srv::AutoProcess_Request;
  using Response = gui_msgs::srv::AutoProcess_Response;
};

}  // namespace srv

}  // namespace gui_msgs

#endif  // GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__STRUCT_HPP_
