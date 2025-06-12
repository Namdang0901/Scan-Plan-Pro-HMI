// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rviz_cloud_annotation
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RectangleSelectionViewport_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rviz_cloud_annotation::msg::RectangleSelectionViewport(_init);
}

void RectangleSelectionViewport_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rviz_cloud_annotation::msg::RectangleSelectionViewport *>(message_memory);
  typed_message->~RectangleSelectionViewport();
}

size_t size_function__RectangleSelectionViewport__projection_matrix(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__RectangleSelectionViewport__projection_matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__RectangleSelectionViewport__projection_matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__RectangleSelectionViewport__projection_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RectangleSelectionViewport__projection_matrix(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RectangleSelectionViewport__projection_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RectangleSelectionViewport__projection_matrix(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RectangleSelectionViewport__polyline_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RectangleSelectionViewport__polyline_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RectangleSelectionViewport__polyline_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RectangleSelectionViewport__polyline_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__RectangleSelectionViewport__polyline_x(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__RectangleSelectionViewport__polyline_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__RectangleSelectionViewport__polyline_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__RectangleSelectionViewport__polyline_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RectangleSelectionViewport__polyline_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RectangleSelectionViewport__polyline_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RectangleSelectionViewport__polyline_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RectangleSelectionViewport__polyline_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__RectangleSelectionViewport__polyline_y(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__RectangleSelectionViewport__polyline_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__RectangleSelectionViewport__polyline_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__RectangleSelectionViewport__polyline_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RectangleSelectionViewport_message_member_array[12] = {
  {
    "start_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, start_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, start_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, end_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, end_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "viewport_height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, viewport_height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "viewport_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, viewport_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "focal_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, focal_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "projection_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, projection_matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__RectangleSelectionViewport__projection_matrix,  // size() function pointer
    get_const_function__RectangleSelectionViewport__projection_matrix,  // get_const(index) function pointer
    get_function__RectangleSelectionViewport__projection_matrix,  // get(index) function pointer
    fetch_function__RectangleSelectionViewport__projection_matrix,  // fetch(index, &value) function pointer
    assign_function__RectangleSelectionViewport__projection_matrix,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, camera_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_deep_selection",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, is_deep_selection),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "polyline_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, polyline_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__RectangleSelectionViewport__polyline_x,  // size() function pointer
    get_const_function__RectangleSelectionViewport__polyline_x,  // get_const(index) function pointer
    get_function__RectangleSelectionViewport__polyline_x,  // get(index) function pointer
    fetch_function__RectangleSelectionViewport__polyline_x,  // fetch(index, &value) function pointer
    assign_function__RectangleSelectionViewport__polyline_x,  // assign(index, value) function pointer
    resize_function__RectangleSelectionViewport__polyline_x  // resize(index) function pointer
  },
  {
    "polyline_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation::msg::RectangleSelectionViewport, polyline_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__RectangleSelectionViewport__polyline_y,  // size() function pointer
    get_const_function__RectangleSelectionViewport__polyline_y,  // get_const(index) function pointer
    get_function__RectangleSelectionViewport__polyline_y,  // get(index) function pointer
    fetch_function__RectangleSelectionViewport__polyline_y,  // fetch(index, &value) function pointer
    assign_function__RectangleSelectionViewport__polyline_y,  // assign(index, value) function pointer
    resize_function__RectangleSelectionViewport__polyline_y  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RectangleSelectionViewport_message_members = {
  "rviz_cloud_annotation::msg",  // message namespace
  "RectangleSelectionViewport",  // message name
  12,  // number of fields
  sizeof(rviz_cloud_annotation::msg::RectangleSelectionViewport),
  RectangleSelectionViewport_message_member_array,  // message members
  RectangleSelectionViewport_init_function,  // function to initialize message memory (memory has to be allocated)
  RectangleSelectionViewport_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RectangleSelectionViewport_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RectangleSelectionViewport_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rviz_cloud_annotation


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rviz_cloud_annotation::msg::RectangleSelectionViewport>()
{
  return &::rviz_cloud_annotation::msg::rosidl_typesupport_introspection_cpp::RectangleSelectionViewport_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rviz_cloud_annotation, msg, RectangleSelectionViewport)() {
  return &::rviz_cloud_annotation::msg::rosidl_typesupport_introspection_cpp::RectangleSelectionViewport_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
