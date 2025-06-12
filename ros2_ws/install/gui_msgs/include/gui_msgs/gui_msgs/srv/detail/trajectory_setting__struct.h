// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gui_msgs:srv/TrajectorySetting.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__STRUCT_H_
#define GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TrajectorySetting in the package gui_msgs.
typedef struct gui_msgs__srv__TrajectorySetting_Request
{
  bool req;
} gui_msgs__srv__TrajectorySetting_Request;

// Struct for a sequence of gui_msgs__srv__TrajectorySetting_Request.
typedef struct gui_msgs__srv__TrajectorySetting_Request__Sequence
{
  gui_msgs__srv__TrajectorySetting_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gui_msgs__srv__TrajectorySetting_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TrajectorySetting in the package gui_msgs.
typedef struct gui_msgs__srv__TrajectorySetting_Response
{
  int32_t tool;
  int32_t parameters;
} gui_msgs__srv__TrajectorySetting_Response;

// Struct for a sequence of gui_msgs__srv__TrajectorySetting_Response.
typedef struct gui_msgs__srv__TrajectorySetting_Response__Sequence
{
  gui_msgs__srv__TrajectorySetting_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gui_msgs__srv__TrajectorySetting_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__STRUCT_H_
