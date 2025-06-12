// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_cloud_annotation:msg/UndoRedoState.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__STRUCT_HPP_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rviz_cloud_annotation__msg__UndoRedoState __attribute__((deprecated))
#else
# define DEPRECATED__rviz_cloud_annotation__msg__UndoRedoState __declspec(deprecated)
#endif

namespace rviz_cloud_annotation
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UndoRedoState_
{
  using Type = UndoRedoState_<ContainerAllocator>;

  explicit UndoRedoState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->redo_enabled = false;
      this->redo_description = "";
      this->undo_enabled = false;
      this->undo_description = "";
    }
  }

  explicit UndoRedoState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : redo_description(_alloc),
    undo_description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->redo_enabled = false;
      this->redo_description = "";
      this->undo_enabled = false;
      this->undo_description = "";
    }
  }

  // field types and members
  using _redo_enabled_type =
    bool;
  _redo_enabled_type redo_enabled;
  using _redo_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _redo_description_type redo_description;
  using _undo_enabled_type =
    bool;
  _undo_enabled_type undo_enabled;
  using _undo_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _undo_description_type undo_description;

  // setters for named parameter idiom
  Type & set__redo_enabled(
    const bool & _arg)
  {
    this->redo_enabled = _arg;
    return *this;
  }
  Type & set__redo_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->redo_description = _arg;
    return *this;
  }
  Type & set__undo_enabled(
    const bool & _arg)
  {
    this->undo_enabled = _arg;
    return *this;
  }
  Type & set__undo_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->undo_description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_cloud_annotation__msg__UndoRedoState
    std::shared_ptr<rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_cloud_annotation__msg__UndoRedoState
    std::shared_ptr<rviz_cloud_annotation::msg::UndoRedoState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UndoRedoState_ & other) const
  {
    if (this->redo_enabled != other.redo_enabled) {
      return false;
    }
    if (this->redo_description != other.redo_description) {
      return false;
    }
    if (this->undo_enabled != other.undo_enabled) {
      return false;
    }
    if (this->undo_description != other.undo_description) {
      return false;
    }
    return true;
  }
  bool operator!=(const UndoRedoState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UndoRedoState_

// alias to use template instance with default allocator
using UndoRedoState =
  rviz_cloud_annotation::msg::UndoRedoState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rviz_cloud_annotation

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__STRUCT_HPP_
