// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gui_msgs:msg/AutoProcess.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__STRUCT_H_
#define GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AutoProcess in the package gui_msgs.
typedef struct gui_msgs__msg__AutoProcess
{
  bool res;
} gui_msgs__msg__AutoProcess;

// Struct for a sequence of gui_msgs__msg__AutoProcess.
typedef struct gui_msgs__msg__AutoProcess__Sequence
{
  gui_msgs__msg__AutoProcess * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gui_msgs__msg__AutoProcess__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__STRUCT_H_
