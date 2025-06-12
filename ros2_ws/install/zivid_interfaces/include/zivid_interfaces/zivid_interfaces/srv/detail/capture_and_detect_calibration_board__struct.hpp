// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/CaptureAndDetectCalibrationBoard.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_CALIBRATION_BOARD__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_CALIBRATION_BOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureAndDetectCalibrationBoard_Request_
{
  using Type = CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator>;

  explicit CaptureAndDetectCalibrationBoard_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CaptureAndDetectCalibrationBoard_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureAndDetectCalibrationBoard_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureAndDetectCalibrationBoard_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureAndDetectCalibrationBoard_Request_

// alias to use template instance with default allocator
using CaptureAndDetectCalibrationBoard_Request =
  zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'detection_result'
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureAndDetectCalibrationBoard_Response_
{
  using Type = CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator>;

  explicit CaptureAndDetectCalibrationBoard_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection_result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CaptureAndDetectCalibrationBoard_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    detection_result(_alloc, _init)
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
  Type & set__detection_result(
    const zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> & _arg)
  {
    this->detection_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureAndDetectCalibrationBoard_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->detection_result != other.detection_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureAndDetectCalibrationBoard_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureAndDetectCalibrationBoard_Response_

// alias to use template instance with default allocator
using CaptureAndDetectCalibrationBoard_Response =
  zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct CaptureAndDetectCalibrationBoard
{
  using Request = zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Request;
  using Response = zivid_interfaces::srv::CaptureAndDetectCalibrationBoard_Response;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_CALIBRATION_BOARD__STRUCT_HPP_
