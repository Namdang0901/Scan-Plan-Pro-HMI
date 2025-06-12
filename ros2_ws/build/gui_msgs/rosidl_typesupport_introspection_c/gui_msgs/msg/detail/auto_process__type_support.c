// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gui_msgs:msg/AutoProcess.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gui_msgs/msg/detail/auto_process__rosidl_typesupport_introspection_c.h"
#include "gui_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gui_msgs/msg/detail/auto_process__functions.h"
#include "gui_msgs/msg/detail/auto_process__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gui_msgs__msg__AutoProcess__init(message_memory);
}

void gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_fini_function(void * message_memory)
{
  gui_msgs__msg__AutoProcess__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_message_member_array[1] = {
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gui_msgs__msg__AutoProcess, res),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_message_members = {
  "gui_msgs__msg",  // message namespace
  "AutoProcess",  // message name
  1,  // number of fields
  sizeof(gui_msgs__msg__AutoProcess),
  gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_message_member_array,  // message members
  gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_init_function,  // function to initialize message memory (memory has to be allocated)
  gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_message_type_support_handle = {
  0,
  &gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gui_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gui_msgs, msg, AutoProcess)() {
  if (!gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_message_type_support_handle.typesupport_identifier) {
    gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gui_msgs__msg__AutoProcess__rosidl_typesupport_introspection_c__AutoProcess_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
