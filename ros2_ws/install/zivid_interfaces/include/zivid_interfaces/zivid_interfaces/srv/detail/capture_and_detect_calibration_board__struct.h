// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/CaptureAndDetectCalibrationBoard.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_CALIBRATION_BOARD__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_CALIBRATION_BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CaptureAndDetectCalibrationBoard in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request
{
  uint8_t structure_needs_at_least_one_member;
} zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request;

// Struct for a sequence of zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request.
typedef struct zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request__Sequence
{
  zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'detection_result'
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.h"

/// Struct defined in srv/CaptureAndDetectCalibrationBoard in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// The result of the calibration board detection.
  zivid_interfaces__msg__DetectionResultCalibrationBoard detection_result;
} zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response;

// Struct for a sequence of zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response.
typedef struct zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response__Sequence
{
  zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_CALIBRATION_BOARD__STRUCT_H_
