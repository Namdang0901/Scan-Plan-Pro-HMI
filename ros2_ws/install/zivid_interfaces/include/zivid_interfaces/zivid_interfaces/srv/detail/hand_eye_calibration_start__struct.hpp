// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationStart.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'calibration_objects'
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationStart_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationStart_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationStart_Request_
{
  using Type = HandEyeCalibrationStart_Request_<ContainerAllocator>;

  explicit HandEyeCalibrationStart_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : calibration_objects(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->working_directory = "";
    }
  }

  explicit HandEyeCalibrationStart_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : working_directory(_alloc),
    calibration_objects(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->working_directory = "";
    }
  }

  // field types and members
  using _working_directory_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _working_directory_type working_directory;
  using _calibration_objects_type =
    zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator>;
  _calibration_objects_type calibration_objects;

  // setters for named parameter idiom
  Type & set__working_directory(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->working_directory = _arg;
    return *this;
  }
  Type & set__calibration_objects(
    const zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator> & _arg)
  {
    this->calibration_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationStart_Request
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationStart_Request
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationStart_Request_ & other) const
  {
    if (this->working_directory != other.working_directory) {
      return false;
    }
    if (this->calibration_objects != other.calibration_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationStart_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationStart_Request_

// alias to use template instance with default allocator
using HandEyeCalibrationStart_Request =
  zivid_interfaces::srv::HandEyeCalibrationStart_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationStart_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationStart_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationStart_Response_
{
  using Type = HandEyeCalibrationStart_Response_<ContainerAllocator>;

  explicit HandEyeCalibrationStart_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit HandEyeCalibrationStart_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationStart_Response
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationStart_Response
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationStart_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationStart_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationStart_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationStart_Response_

// alias to use template instance with default allocator
using HandEyeCalibrationStart_Response =
  zivid_interfaces::srv::HandEyeCalibrationStart_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct HandEyeCalibrationStart
{
  using Request = zivid_interfaces::srv::HandEyeCalibrationStart_Request;
  using Response = zivid_interfaces::srv::HandEyeCalibrationStart_Response;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__STRUCT_HPP_
