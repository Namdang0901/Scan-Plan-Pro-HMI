// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gui_msgs:srv/SettingParams.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__STRUCT_HPP_
#define GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gui_msgs__srv__SettingParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__srv__SettingParams_Request __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SettingParams_Request_
{
  using Type = SettingParams_Request_<ContainerAllocator>;

  explicit SettingParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = false;
    }
  }

  explicit SettingParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gui_msgs::srv::SettingParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::srv::SettingParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::srv::SettingParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::srv::SettingParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::SettingParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::SettingParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::SettingParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::SettingParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::srv::SettingParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::srv::SettingParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__srv__SettingParams_Request
    std::shared_ptr<gui_msgs::srv::SettingParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__srv__SettingParams_Request
    std::shared_ptr<gui_msgs::srv::SettingParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SettingParams_Request_ & other) const
  {
    if (this->req != other.req) {
      return false;
    }
    return true;
  }
  bool operator!=(const SettingParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SettingParams_Request_

// alias to use template instance with default allocator
using SettingParams_Request =
  gui_msgs::srv::SettingParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gui_msgs


#ifndef _WIN32
# define DEPRECATED__gui_msgs__srv__SettingParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__gui_msgs__srv__SettingParams_Response __declspec(deprecated)
#endif

namespace gui_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SettingParams_Response_
{
  using Type = SettingParams_Response_<ContainerAllocator>;

  explicit SettingParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear = 0l;
      this->rotation = 0l;
      this->grinding_speed = 0l;
      this->grinding_force = 0l;
      this->spindle_speed = 0l;
    }
  }

  explicit SettingParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear = 0l;
      this->rotation = 0l;
      this->grinding_speed = 0l;
      this->grinding_force = 0l;
      this->spindle_speed = 0l;
    }
  }

  // field types and members
  using _linear_type =
    int32_t;
  _linear_type linear;
  using _rotation_type =
    int32_t;
  _rotation_type rotation;
  using _grinding_speed_type =
    int32_t;
  _grinding_speed_type grinding_speed;
  using _grinding_force_type =
    int32_t;
  _grinding_force_type grinding_force;
  using _spindle_speed_type =
    int32_t;
  _spindle_speed_type spindle_speed;

  // setters for named parameter idiom
  Type & set__linear(
    const int32_t & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__rotation(
    const int32_t & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__grinding_speed(
    const int32_t & _arg)
  {
    this->grinding_speed = _arg;
    return *this;
  }
  Type & set__grinding_force(
    const int32_t & _arg)
  {
    this->grinding_force = _arg;
    return *this;
  }
  Type & set__spindle_speed(
    const int32_t & _arg)
  {
    this->spindle_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gui_msgs::srv::SettingParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gui_msgs::srv::SettingParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gui_msgs::srv::SettingParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gui_msgs::srv::SettingParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::SettingParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::SettingParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gui_msgs::srv::SettingParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gui_msgs::srv::SettingParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gui_msgs::srv::SettingParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gui_msgs::srv::SettingParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gui_msgs__srv__SettingParams_Response
    std::shared_ptr<gui_msgs::srv::SettingParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gui_msgs__srv__SettingParams_Response
    std::shared_ptr<gui_msgs::srv::SettingParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SettingParams_Response_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->grinding_speed != other.grinding_speed) {
      return false;
    }
    if (this->grinding_force != other.grinding_force) {
      return false;
    }
    if (this->spindle_speed != other.spindle_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SettingParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SettingParams_Response_

// alias to use template instance with default allocator
using SettingParams_Response =
  gui_msgs::srv::SettingParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gui_msgs

namespace gui_msgs
{

namespace srv
{

struct SettingParams
{
  using Request = gui_msgs::srv::SettingParams_Request;
  using Response = gui_msgs::srv::SettingParams_Response;
};

}  // namespace srv

}  // namespace gui_msgs

#endif  // GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__STRUCT_HPP_
