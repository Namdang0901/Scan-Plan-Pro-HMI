// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__STRUCT_H_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'polyline_x'
// Member 'polyline_y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RectangleSelectionViewport in the package rviz_cloud_annotation.
typedef struct rviz_cloud_annotation__msg__RectangleSelectionViewport
{
  uint32_t start_x;
  uint32_t start_y;
  uint32_t end_x;
  uint32_t end_y;
  uint32_t viewport_height;
  uint32_t viewport_width;
  float focal_length;
  float projection_matrix[16];
  geometry_msgs__msg__Pose camera_pose;
  bool is_deep_selection;
  rosidl_runtime_c__int32__Sequence polyline_x;
  rosidl_runtime_c__int32__Sequence polyline_y;
} rviz_cloud_annotation__msg__RectangleSelectionViewport;

// Struct for a sequence of rviz_cloud_annotation__msg__RectangleSelectionViewport.
typedef struct rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence
{
  rviz_cloud_annotation__msg__RectangleSelectionViewport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__STRUCT_H_
