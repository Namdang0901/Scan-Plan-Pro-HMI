// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/InfieldCorrectionCompute.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCompute_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCompute_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InfieldCorrectionCompute_Request_
{
  using Type = InfieldCorrectionCompute_Request_<ContainerAllocator>;

  explicit InfieldCorrectionCompute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit InfieldCorrectionCompute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCompute_Request
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCompute_Request
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfieldCorrectionCompute_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfieldCorrectionCompute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfieldCorrectionCompute_Request_

// alias to use template instance with default allocator
using InfieldCorrectionCompute_Request =
  zivid_interfaces::srv::InfieldCorrectionCompute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCompute_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCompute_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InfieldCorrectionCompute_Response_
{
  using Type = InfieldCorrectionCompute_Response_<ContainerAllocator>;

  explicit InfieldCorrectionCompute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->infield_correction_started = false;
      this->number_of_captures = 0l;
      this->average_trueness_error = 0.0f;
      this->maximum_trueness_error = 0.0f;
      this->dimension_accuracy = 0.0f;
      this->z_min = 0.0f;
      this->z_max = 0.0f;
    }
  }

  explicit InfieldCorrectionCompute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->infield_correction_started = false;
      this->number_of_captures = 0l;
      this->average_trueness_error = 0.0f;
      this->maximum_trueness_error = 0.0f;
      this->dimension_accuracy = 0.0f;
      this->z_min = 0.0f;
      this->z_max = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _infield_correction_started_type =
    bool;
  _infield_correction_started_type infield_correction_started;
  using _number_of_captures_type =
    int32_t;
  _number_of_captures_type number_of_captures;
  using _trueness_errors_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _trueness_errors_type trueness_errors;
  using _average_trueness_error_type =
    float;
  _average_trueness_error_type average_trueness_error;
  using _maximum_trueness_error_type =
    float;
  _maximum_trueness_error_type maximum_trueness_error;
  using _dimension_accuracy_type =
    float;
  _dimension_accuracy_type dimension_accuracy;
  using _z_min_type =
    float;
  _z_min_type z_min;
  using _z_max_type =
    float;
  _z_max_type z_max;

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
  Type & set__infield_correction_started(
    const bool & _arg)
  {
    this->infield_correction_started = _arg;
    return *this;
  }
  Type & set__number_of_captures(
    const int32_t & _arg)
  {
    this->number_of_captures = _arg;
    return *this;
  }
  Type & set__trueness_errors(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->trueness_errors = _arg;
    return *this;
  }
  Type & set__average_trueness_error(
    const float & _arg)
  {
    this->average_trueness_error = _arg;
    return *this;
  }
  Type & set__maximum_trueness_error(
    const float & _arg)
  {
    this->maximum_trueness_error = _arg;
    return *this;
  }
  Type & set__dimension_accuracy(
    const float & _arg)
  {
    this->dimension_accuracy = _arg;
    return *this;
  }
  Type & set__z_min(
    const float & _arg)
  {
    this->z_min = _arg;
    return *this;
  }
  Type & set__z_max(
    const float & _arg)
  {
    this->z_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCompute_Response
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__InfieldCorrectionCompute_Response
    std::shared_ptr<zivid_interfaces::srv::InfieldCorrectionCompute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfieldCorrectionCompute_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->infield_correction_started != other.infield_correction_started) {
      return false;
    }
    if (this->number_of_captures != other.number_of_captures) {
      return false;
    }
    if (this->trueness_errors != other.trueness_errors) {
      return false;
    }
    if (this->average_trueness_error != other.average_trueness_error) {
      return false;
    }
    if (this->maximum_trueness_error != other.maximum_trueness_error) {
      return false;
    }
    if (this->dimension_accuracy != other.dimension_accuracy) {
      return false;
    }
    if (this->z_min != other.z_min) {
      return false;
    }
    if (this->z_max != other.z_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfieldCorrectionCompute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfieldCorrectionCompute_Response_

// alias to use template instance with default allocator
using InfieldCorrectionCompute_Response =
  zivid_interfaces::srv::InfieldCorrectionCompute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct InfieldCorrectionCompute
{
  using Request = zivid_interfaces::srv::InfieldCorrectionCompute_Request;
  using Response = zivid_interfaces::srv::InfieldCorrectionCompute_Response;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__STRUCT_HPP_
