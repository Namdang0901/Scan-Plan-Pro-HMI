// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_cloud_annotation:msg/UndoRedoState.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__STRUCT_H_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'redo_description'
// Member 'undo_description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UndoRedoState in the package rviz_cloud_annotation.
typedef struct rviz_cloud_annotation__msg__UndoRedoState
{
  bool redo_enabled;
  rosidl_runtime_c__String redo_description;
  bool undo_enabled;
  rosidl_runtime_c__String undo_description;
} rviz_cloud_annotation__msg__UndoRedoState;

// Struct for a sequence of rviz_cloud_annotation__msg__UndoRedoState.
typedef struct rviz_cloud_annotation__msg__UndoRedoState__Sequence
{
  rviz_cloud_annotation__msg__UndoRedoState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_cloud_annotation__msg__UndoRedoState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__STRUCT_H_
