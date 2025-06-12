// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "zivid_interfaces/msg/detail/marker_shape__struct.hpp"
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

void MarkerShape_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::msg::MarkerShape(_init);
}

void MarkerShape_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::msg::MarkerShape *>(message_memory);
  typed_message->~MarkerShape();
}

size_t size_function__MarkerShape__corners_in_pixel_coordinates(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MarkerShape__corners_in_pixel_coordinates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Point, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MarkerShape__corners_in_pixel_coordinates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Point, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MarkerShape__corners_in_pixel_coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__MarkerShape__corners_in_pixel_coordinates(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__MarkerShape__corners_in_pixel_coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__MarkerShape__corners_in_pixel_coordinates(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

size_t size_function__MarkerShape__corners_in_camera_coordinates(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MarkerShape__corners_in_camera_coordinates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Point, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MarkerShape__corners_in_camera_coordinates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Point, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MarkerShape__corners_in_camera_coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__MarkerShape__corners_in_camera_coordinates(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__MarkerShape__corners_in_camera_coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__MarkerShape__corners_in_camera_coordinates(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MarkerShape_message_member_array[4] = {
  {
    "corners_in_pixel_coordinates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::MarkerShape, corners_in_pixel_coordinates),  // bytes offset in struct
    nullptr,  // default value
    size_function__MarkerShape__corners_in_pixel_coordinates,  // size() function pointer
    get_const_function__MarkerShape__corners_in_pixel_coordinates,  // get_const(index) function pointer
    get_function__MarkerShape__corners_in_pixel_coordinates,  // get(index) function pointer
    fetch_function__MarkerShape__corners_in_pixel_coordinates,  // fetch(index, &value) function pointer
    assign_function__MarkerShape__corners_in_pixel_coordinates,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "corners_in_camera_coordinates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::MarkerShape, corners_in_camera_coordinates),  // bytes offset in struct
    nullptr,  // default value
    size_function__MarkerShape__corners_in_camera_coordinates,  // size() function pointer
    get_const_function__MarkerShape__corners_in_camera_coordinates,  // get_const(index) function pointer
    get_function__MarkerShape__corners_in_camera_coordinates,  // get(index) function pointer
    fetch_function__MarkerShape__corners_in_camera_coordinates,  // fetch(index, &value) function pointer
    assign_function__MarkerShape__corners_in_camera_coordinates,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::MarkerShape, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::MarkerShape, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MarkerShape_message_members = {
  "zivid_interfaces::msg",  // message namespace
  "MarkerShape",  // message name
  4,  // number of fields
  sizeof(zivid_interfaces::msg::MarkerShape),
  MarkerShape_message_member_array,  // message members
  MarkerShape_init_function,  // function to initialize message memory (memory has to be allocated)
  MarkerShape_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MarkerShape_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MarkerShape_message_members,
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
get_message_type_support_handle<zivid_interfaces::msg::MarkerShape>()
{
  return &::zivid_interfaces::msg::rosidl_typesupport_introspection_cpp::MarkerShape_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, msg, MarkerShape)() {
  return &::zivid_interfaces::msg::rosidl_typesupport_introspection_cpp::MarkerShape_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
