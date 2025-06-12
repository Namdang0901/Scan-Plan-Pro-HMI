// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/CameraInfoModelName.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CameraInfoModelName in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CameraInfoModelName_Request
{
  uint8_t structure_needs_at_least_one_member;
} zivid_interfaces__srv__CameraInfoModelName_Request;

// Struct for a sequence of zivid_interfaces__srv__CameraInfoModelName_Request.
typedef struct zivid_interfaces__srv__CameraInfoModelName_Request__Sequence
{
  zivid_interfaces__srv__CameraInfoModelName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CameraInfoModelName_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'model_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CameraInfoModelName in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CameraInfoModelName_Response
{
  rosidl_runtime_c__String model_name;
} zivid_interfaces__srv__CameraInfoModelName_Response;

// Struct for a sequence of zivid_interfaces__srv__CameraInfoModelName_Response.
typedef struct zivid_interfaces__srv__CameraInfoModelName_Response__Sequence
{
  zivid_interfaces__srv__CameraInfoModelName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CameraInfoModelName_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__STRUCT_H_
