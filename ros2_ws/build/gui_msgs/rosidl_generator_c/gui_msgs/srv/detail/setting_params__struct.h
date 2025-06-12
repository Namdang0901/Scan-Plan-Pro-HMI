// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gui_msgs:srv/SettingParams.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__STRUCT_H_
#define GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SettingParams in the package gui_msgs.
typedef struct gui_msgs__srv__SettingParams_Request
{
  bool req;
} gui_msgs__srv__SettingParams_Request;

// Struct for a sequence of gui_msgs__srv__SettingParams_Request.
typedef struct gui_msgs__srv__SettingParams_Request__Sequence
{
  gui_msgs__srv__SettingParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gui_msgs__srv__SettingParams_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SettingParams in the package gui_msgs.
typedef struct gui_msgs__srv__SettingParams_Response
{
  int32_t linear;
  int32_t rotation;
  int32_t grinding_speed;
  int32_t grinding_force;
  int32_t spindle_speed;
} gui_msgs__srv__SettingParams_Response;

// Struct for a sequence of gui_msgs__srv__SettingParams_Response.
typedef struct gui_msgs__srv__SettingParams_Response__Sequence
{
  gui_msgs__srv__SettingParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gui_msgs__srv__SettingParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__STRUCT_H_
