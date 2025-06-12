// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/InfieldCorrectionRead.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InfieldCorrectionRead in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__InfieldCorrectionRead_Request
{
  uint8_t structure_needs_at_least_one_member;
} zivid_interfaces__srv__InfieldCorrectionRead_Request;

// Struct for a sequence of zivid_interfaces__srv__InfieldCorrectionRead_Request.
typedef struct zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence
{
  zivid_interfaces__srv__InfieldCorrectionRead_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'camera_correction_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/InfieldCorrectionRead in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__InfieldCorrectionRead_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// True if the camera has a stored correction.
  bool has_camera_correction;
  /// The calendar time of the current camera correction, or zero if no correction is stored on the camera.
  builtin_interfaces__msg__Time camera_correction_timestamp;
} zivid_interfaces__srv__InfieldCorrectionRead_Response;

// Struct for a sequence of zivid_interfaces__srv__InfieldCorrectionRead_Response.
typedef struct zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence
{
  zivid_interfaces__srv__InfieldCorrectionRead_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__STRUCT_H_
