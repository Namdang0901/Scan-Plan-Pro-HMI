// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/HandEyeCalibrationLoad.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'working_directory'
#include "rosidl_runtime_c/string.h"
// Member 'calibration_objects'
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__struct.h"

/// Struct defined in srv/HandEyeCalibrationLoad in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationLoad_Request
{
  rosidl_runtime_c__String working_directory;
  /// Specify the calibration object(s) used during the hand-eye calibration session.
  zivid_interfaces__msg__HandEyeCalibrationObjects calibration_objects;
} zivid_interfaces__srv__HandEyeCalibrationLoad_Request;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationLoad_Request.
typedef struct zivid_interfaces__srv__HandEyeCalibrationLoad_Request__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationLoad_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationLoad_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HandEyeCalibrationLoad in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationLoad_Response
{
  bool success;
  rosidl_runtime_c__String message;
} zivid_interfaces__srv__HandEyeCalibrationLoad_Response;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationLoad_Response.
typedef struct zivid_interfaces__srv__HandEyeCalibrationLoad_Response__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationLoad_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationLoad_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__STRUCT_H_
