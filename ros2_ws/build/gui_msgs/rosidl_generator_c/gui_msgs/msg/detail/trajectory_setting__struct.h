// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gui_msgs:msg/TrajectorySetting.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__STRUCT_H_
#define GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrajectorySetting in the package gui_msgs.
typedef struct gui_msgs__msg__TrajectorySetting
{
  int32_t tool;
  int32_t parameters;
} gui_msgs__msg__TrajectorySetting;

// Struct for a sequence of gui_msgs__msg__TrajectorySetting.
typedef struct gui_msgs__msg__TrajectorySetting__Sequence
{
  gui_msgs__msg__TrajectorySetting * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gui_msgs__msg__TrajectorySetting__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__STRUCT_H_
