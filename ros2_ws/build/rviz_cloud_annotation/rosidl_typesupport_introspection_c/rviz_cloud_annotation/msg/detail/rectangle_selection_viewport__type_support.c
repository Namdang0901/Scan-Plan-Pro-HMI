// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__rosidl_typesupport_introspection_c.h"
#include "rviz_cloud_annotation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__functions.h"
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__struct.h"


// Include directives for member types
// Member `camera_pose`
#include "geometry_msgs/msg/pose.h"
// Member `camera_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `polyline_x`
// Member `polyline_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rviz_cloud_annotation__msg__RectangleSelectionViewport__init(message_memory);
}

void rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_fini_function(void * message_memory)
{
  rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(message_memory);
}

size_t rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__size_function__RectangleSelectionViewport__projection_matrix(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__projection_matrix(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__projection_matrix(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__fetch_function__RectangleSelectionViewport__projection_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__projection_matrix(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__assign_function__RectangleSelectionViewport__projection_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__projection_matrix(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__size_function__RectangleSelectionViewport__polyline_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__polyline_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__polyline_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__fetch_function__RectangleSelectionViewport__polyline_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__polyline_x(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__assign_function__RectangleSelectionViewport__polyline_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__polyline_x(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__resize_function__RectangleSelectionViewport__polyline_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__size_function__RectangleSelectionViewport__polyline_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__polyline_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__polyline_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__fetch_function__RectangleSelectionViewport__polyline_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__polyline_y(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__assign_function__RectangleSelectionViewport__polyline_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__polyline_y(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__resize_function__RectangleSelectionViewport__polyline_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_member_array[12] = {
  {
    "start_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, start_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, start_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, end_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, end_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "viewport_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, viewport_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "viewport_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, viewport_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "focal_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, focal_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "projection_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, projection_matrix),  // bytes offset in struct
    NULL,  // default value
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__size_function__RectangleSelectionViewport__projection_matrix,  // size() function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__projection_matrix,  // get_const(index) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__projection_matrix,  // get(index) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__fetch_function__RectangleSelectionViewport__projection_matrix,  // fetch(index, &value) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__assign_function__RectangleSelectionViewport__projection_matrix,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, camera_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_deep_selection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, is_deep_selection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polyline_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, polyline_x),  // bytes offset in struct
    NULL,  // default value
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__size_function__RectangleSelectionViewport__polyline_x,  // size() function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__polyline_x,  // get_const(index) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__polyline_x,  // get(index) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__fetch_function__RectangleSelectionViewport__polyline_x,  // fetch(index, &value) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__assign_function__RectangleSelectionViewport__polyline_x,  // assign(index, value) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__resize_function__RectangleSelectionViewport__polyline_x  // resize(index) function pointer
  },
  {
    "polyline_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__RectangleSelectionViewport, polyline_y),  // bytes offset in struct
    NULL,  // default value
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__size_function__RectangleSelectionViewport__polyline_y,  // size() function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_const_function__RectangleSelectionViewport__polyline_y,  // get_const(index) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__get_function__RectangleSelectionViewport__polyline_y,  // get(index) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__fetch_function__RectangleSelectionViewport__polyline_y,  // fetch(index, &value) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__assign_function__RectangleSelectionViewport__polyline_y,  // assign(index, value) function pointer
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__resize_function__RectangleSelectionViewport__polyline_y  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_members = {
  "rviz_cloud_annotation__msg",  // message namespace
  "RectangleSelectionViewport",  // message name
  12,  // number of fields
  sizeof(rviz_cloud_annotation__msg__RectangleSelectionViewport),
  rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_member_array,  // message members
  rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_init_function,  // function to initialize message memory (memory has to be allocated)
  rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_type_support_handle = {
  0,
  &rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rviz_cloud_annotation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_cloud_annotation, msg, RectangleSelectionViewport)() {
  rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_type_support_handle.typesupport_identifier) {
    rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rviz_cloud_annotation__msg__RectangleSelectionViewport__rosidl_typesupport_introspection_c__RectangleSelectionViewport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
