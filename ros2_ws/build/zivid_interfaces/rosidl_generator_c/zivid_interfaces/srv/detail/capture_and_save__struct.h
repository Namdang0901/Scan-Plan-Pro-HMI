// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/CaptureAndSave.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_SAVE__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_SAVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CaptureAndSave in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAndSave_Request
{
  rosidl_runtime_c__String file_path;
} zivid_interfaces__srv__CaptureAndSave_Request;

// Struct for a sequence of zivid_interfaces__srv__CaptureAndSave_Request.
typedef struct zivid_interfaces__srv__CaptureAndSave_Request__Sequence
{
  zivid_interfaces__srv__CaptureAndSave_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAndSave_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CaptureAndSave in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAndSave_Response
{
  bool success;
  rosidl_runtime_c__String message;
} zivid_interfaces__srv__CaptureAndSave_Response;

// Struct for a sequence of zivid_interfaces__srv__CaptureAndSave_Response.
typedef struct zivid_interfaces__srv__CaptureAndSave_Response__Sequence
{
  zivid_interfaces__srv__CaptureAndSave_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAndSave_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_SAVE__STRUCT_H_
