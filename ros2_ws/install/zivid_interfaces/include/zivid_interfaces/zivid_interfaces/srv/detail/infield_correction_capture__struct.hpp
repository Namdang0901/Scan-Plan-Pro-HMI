// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/InfieldCorrectionCapture.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCapture_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCapture_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InfieldCorrectionCapture_Request_
{
  using Type = InfieldCorrectionCapture_Request_<ContainerAllocator>;

  explicit InfieldCorrectionCapture_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit InfieldCorrectionCapture_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCapture_Request
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCapture_Request
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfieldCorrectionCapture_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfieldCorrectionCapture_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfieldCorrectionCapture_Request_

// alias to use template instance with default allocator
using InfieldCorrectionCapture_Request =
  zivid_interfaces::srv::InfieldCorrectionCapture_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'detection_result'
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCapture_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCapture_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InfieldCorrectionCapture_Response_
{
  using Type = InfieldCorrectionCapture_Response_<ContainerAllocator>;

  explicit InfieldCorrectionCapture_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection_result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->status = 0;
      this->number_of_captures = 0l;
    }
  }

  explicit InfieldCorrectionCapture_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    detection_result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->status = 0;
      this->number_of_captures = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _status_type =
    uint8_t;
  _status_type status;
  using _number_of_captures_type =
    int32_t;
  _number_of_captures_type number_of_captures;
  using _detection_result_type =
    zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator>;
  _detection_result_type detection_result;

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
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__number_of_captures(
    const int32_t & _arg)
  {
    this->number_of_captures = _arg;
    return *this;
  }
  Type & set__detection_result(
    const zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> & _arg)
  {
    this->detection_result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_NOT_SET =
    0u;
  static constexpr uint8_t STATUS_OK =
    1u;
  static constexpr uint8_t STATUS_DETECTION_FAILED =
    2u;
  static constexpr uint8_t STATUS_INVALID_CAPTURE_METHOD =
    3u;
  static constexpr uint8_t STATUS_INVALID_ALIGNMENT =
    4u;

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCapture_Response
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCapture_Response
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCapture_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfieldCorrectionCapture_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->number_of_captures != other.number_of_captures) {
      return false;
    }
    if (this->detection_result != other.detection_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfieldCorrectionCapture_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfieldCorrectionCapture_Response_

// alias to use template instance with default allocator
using InfieldCorrectionCapture_Response =
  zivid_interfaces::srv::InfieldCorrectionCapture_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfieldCorrectionCapture_Response_<ContainerAllocator>::STATUS_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfieldCorrectionCapture_Response_<ContainerAllocator>::STATUS_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfieldCorrectionCapture_Response_<ContainerAllocator>::STATUS_DETECTION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfieldCorrectionCapture_Response_<ContainerAllocator>::STATUS_INVALID_CAPTURE_METHOD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfieldCorrectionCapture_Response_<ContainerAllocator>::STATUS_INVALID_ALIGNMENT;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct InfieldCorrectionCapture
{
  using Request = zivid_interfaces::srv::InfieldCorrectionCapture_Request;
  using Response = zivid_interfaces::srv::InfieldCorrectionCapture_Response;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__STRUCT_HPP_
