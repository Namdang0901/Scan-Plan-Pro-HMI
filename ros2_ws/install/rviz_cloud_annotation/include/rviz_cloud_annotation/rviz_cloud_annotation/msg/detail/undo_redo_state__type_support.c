// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rviz_cloud_annotation:msg/UndoRedoState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__rosidl_typesupport_introspection_c.h"
#include "rviz_cloud_annotation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__functions.h"
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__struct.h"


// Include directives for member types
// Member `redo_description`
// Member `undo_description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rviz_cloud_annotation__msg__UndoRedoState__init(message_memory);
}

void rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_fini_function(void * message_memory)
{
  rviz_cloud_annotation__msg__UndoRedoState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_message_member_array[4] = {
  {
    "redo_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__UndoRedoState, redo_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "redo_description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__UndoRedoState, redo_description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "undo_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__UndoRedoState, undo_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "undo_description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_cloud_annotation__msg__UndoRedoState, undo_description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_message_members = {
  "rviz_cloud_annotation__msg",  // message namespace
  "UndoRedoState",  // message name
  4,  // number of fields
  sizeof(rviz_cloud_annotation__msg__UndoRedoState),
  rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_message_member_array,  // message members
  rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_init_function,  // function to initialize message memory (memory has to be allocated)
  rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_message_type_support_handle = {
  0,
  &rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rviz_cloud_annotation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_cloud_annotation, msg, UndoRedoState)() {
  if (!rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_message_type_support_handle.typesupport_identifier) {
    rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rviz_cloud_annotation__msg__UndoRedoState__rosidl_typesupport_introspection_c__UndoRedoState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
