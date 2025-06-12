// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/CaptureAssistantSuggestSettings.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'max_capture_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureAssistantSuggestSettings_Request_
{
  using Type = CaptureAssistantSuggestSettings_Request_<ContainerAllocator>;

  explicit CaptureAssistantSuggestSettings_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : max_capture_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ambient_light_frequency = 0;
    }
  }

  explicit CaptureAssistantSuggestSettings_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : max_capture_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ambient_light_frequency = 0;
    }
  }

  // field types and members
  using _max_capture_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _max_capture_time_type max_capture_time;
  using _ambient_light_frequency_type =
    uint8_t;
  _ambient_light_frequency_type ambient_light_frequency;

  // setters for named parameter idiom
  Type & set__max_capture_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->max_capture_time = _arg;
    return *this;
  }
  Type & set__ambient_light_frequency(
    const uint8_t & _arg)
  {
    this->ambient_light_frequency = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AMBIENT_LIGHT_FREQUENCY_NONE =
    0u;
  static constexpr uint8_t AMBIENT_LIGHT_FREQUENCY_50HZ =
    1u;
  static constexpr uint8_t AMBIENT_LIGHT_FREQUENCY_60HZ =
    2u;

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request
    std::shared_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request
    std::shared_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureAssistantSuggestSettings_Request_ & other) const
  {
    if (this->max_capture_time != other.max_capture_time) {
      return false;
    }
    if (this->ambient_light_frequency != other.ambient_light_frequency) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureAssistantSuggestSettings_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureAssistantSuggestSettings_Request_

// alias to use template instance with default allocator
using CaptureAssistantSuggestSettings_Request =
  zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CaptureAssistantSuggestSettings_Request_<ContainerAllocator>::AMBIENT_LIGHT_FREQUENCY_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CaptureAssistantSuggestSettings_Request_<ContainerAllocator>::AMBIENT_LIGHT_FREQUENCY_50HZ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CaptureAssistantSuggestSettings_Request_<ContainerAllocator>::AMBIENT_LIGHT_FREQUENCY_60HZ;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace zivid_interfaces


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureAssistantSuggestSettings_Response_
{
  using Type = CaptureAssistantSuggestSettings_Response_<ContainerAllocator>;

  explicit CaptureAssistantSuggestSettings_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->suggested_settings = "";
      this->success = false;
      this->message = "";
    }
  }

  explicit CaptureAssistantSuggestSettings_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : suggested_settings(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->suggested_settings = "";
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _suggested_settings_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _suggested_settings_type suggested_settings;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__suggested_settings(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->suggested_settings = _arg;
    return *this;
  }
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
    zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response
    std::shared_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response
    std::shared_ptr<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureAssistantSuggestSettings_Response_ & other) const
  {
    if (this->suggested_settings != other.suggested_settings) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureAssistantSuggestSettings_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureAssistantSuggestSettings_Response_

// alias to use template instance with default allocator
using CaptureAssistantSuggestSettings_Response =
  zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct CaptureAssistantSuggestSettings
{
  using Request = zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request;
  using Response = zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__STRUCT_HPP_
