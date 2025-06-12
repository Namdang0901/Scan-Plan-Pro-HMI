// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gui_msgs:msg/SettingTool.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__SETTING_TOOL__STRUCT_H_
#define GUI_MSGS__MSG__DETAIL__SETTING_TOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SettingTool in the package gui_msgs.
typedef struct gui_msgs__msg__SettingTool
{
  int32_t tool_rpm;
  int32_t feed_rate;
  int32_t tool_diameter;
  int32_t tool_length;
  int32_t tool_pressure;
  int32_t sanding;
  int32_t dir;
  int32_t tooltype;
  int32_t toolgeometry;
} gui_msgs__msg__SettingTool;

// Struct for a sequence of gui_msgs__msg__SettingTool.
typedef struct gui_msgs__msg__SettingTool__Sequence
{
  gui_msgs__msg__SettingTool * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gui_msgs__msg__SettingTool__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUI_MSGS__MSG__DETAIL__SETTING_TOOL__STRUCT_H_
