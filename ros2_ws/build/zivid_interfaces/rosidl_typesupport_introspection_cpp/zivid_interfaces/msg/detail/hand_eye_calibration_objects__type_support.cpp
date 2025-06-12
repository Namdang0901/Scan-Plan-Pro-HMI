// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationObjects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace zivid_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HandEyeCalibrationObjects_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::msg::HandEyeCalibrationObjects(_init);
}

void HandEyeCalibrationObjects_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::msg::HandEyeCalibrationObjects *>(message_memory);
  typed_message->~HandEyeCalibrationObjects();
}

size_t size_function__HandEyeCalibrationObjects__marker_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HandEyeCalibrationObjects__marker_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__HandEyeCalibrationObjects__marker_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__HandEyeCalibrationObjects__marker_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__HandEyeCalibrationObjects__marker_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__HandEyeCalibrationObjects__marker_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__HandEyeCalibrationObjects__marker_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__HandEyeCalibrationObjects__marker_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HandEyeCalibrationObjects_message_member_array[3] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::HandEyeCalibrationObjects, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "marker_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::HandEyeCalibrationObjects, marker_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__HandEyeCalibrationObjects__marker_ids,  // size() function pointer
    get_const_function__HandEyeCalibrationObjects__marker_ids,  // get_const(index) function pointer
    get_function__HandEyeCalibrationObjects__marker_ids,  // get(index) function pointer
    fetch_function__HandEyeCalibrationObjects__marker_ids,  // fetch(index, &value) function pointer
    assign_function__HandEyeCalibrationObjects__marker_ids,  // assign(index, value) function pointer
    resize_function__HandEyeCalibrationObjects__marker_ids  // resize(index) function pointer
  },
  {
    "marker_dictionary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::HandEyeCalibrationObjects, marker_dictionary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HandEyeCalibrationObjects_message_members = {
  "zivid_interfaces::msg",  // message namespace
  "HandEyeCalibrationObjects",  // message name
  3,  // number of fields
  sizeof(zivid_interfaces::msg::HandEyeCalibrationObjects),
  HandEyeCalibrationObjects_message_member_array,  // message members
  HandEyeCalibrationObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  HandEyeCalibrationObjects_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HandEyeCalibrationObjects_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HandEyeCalibrationObjects_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::msg::HandEyeCalibrationObjects>()
{
  return &::zivid_interfaces::msg::rosidl_typesupport_introspection_cpp::HandEyeCalibrationObjects_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, msg, HandEyeCalibrationObjects)() {
  return &::zivid_interfaces::msg::rosidl_typesupport_introspection_cpp::HandEyeCalibrationObjects_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
