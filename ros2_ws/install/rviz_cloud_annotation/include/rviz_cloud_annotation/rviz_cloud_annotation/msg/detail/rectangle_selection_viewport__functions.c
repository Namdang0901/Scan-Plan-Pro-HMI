// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `camera_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `polyline_x`
// Member `polyline_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__init(rviz_cloud_annotation__msg__RectangleSelectionViewport * msg)
{
  if (!msg) {
    return false;
  }
  // start_x
  // start_y
  // end_x
  // end_y
  // viewport_height
  // viewport_width
  // focal_length
  // projection_matrix
  // camera_pose
  if (!geometry_msgs__msg__Pose__init(&msg->camera_pose)) {
    rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(msg);
    return false;
  }
  // is_deep_selection
  // polyline_x
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->polyline_x, 0)) {
    rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(msg);
    return false;
  }
  // polyline_y
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->polyline_y, 0)) {
    rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(msg);
    return false;
  }
  return true;
}

void
rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(rviz_cloud_annotation__msg__RectangleSelectionViewport * msg)
{
  if (!msg) {
    return;
  }
  // start_x
  // start_y
  // end_x
  // end_y
  // viewport_height
  // viewport_width
  // focal_length
  // projection_matrix
  // camera_pose
  geometry_msgs__msg__Pose__fini(&msg->camera_pose);
  // is_deep_selection
  // polyline_x
  rosidl_runtime_c__int32__Sequence__fini(&msg->polyline_x);
  // polyline_y
  rosidl_runtime_c__int32__Sequence__fini(&msg->polyline_y);
}

bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__are_equal(const rviz_cloud_annotation__msg__RectangleSelectionViewport * lhs, const rviz_cloud_annotation__msg__RectangleSelectionViewport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_x
  if (lhs->start_x != rhs->start_x) {
    return false;
  }
  // start_y
  if (lhs->start_y != rhs->start_y) {
    return false;
  }
  // end_x
  if (lhs->end_x != rhs->end_x) {
    return false;
  }
  // end_y
  if (lhs->end_y != rhs->end_y) {
    return false;
  }
  // viewport_height
  if (lhs->viewport_height != rhs->viewport_height) {
    return false;
  }
  // viewport_width
  if (lhs->viewport_width != rhs->viewport_width) {
    return false;
  }
  // focal_length
  if (lhs->focal_length != rhs->focal_length) {
    return false;
  }
  // projection_matrix
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->projection_matrix[i] != rhs->projection_matrix[i]) {
      return false;
    }
  }
  // camera_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->camera_pose), &(rhs->camera_pose)))
  {
    return false;
  }
  // is_deep_selection
  if (lhs->is_deep_selection != rhs->is_deep_selection) {
    return false;
  }
  // polyline_x
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->polyline_x), &(rhs->polyline_x)))
  {
    return false;
  }
  // polyline_y
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->polyline_y), &(rhs->polyline_y)))
  {
    return false;
  }
  return true;
}

bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__copy(
  const rviz_cloud_annotation__msg__RectangleSelectionViewport * input,
  rviz_cloud_annotation__msg__RectangleSelectionViewport * output)
{
  if (!input || !output) {
    return false;
  }
  // start_x
  output->start_x = input->start_x;
  // start_y
  output->start_y = input->start_y;
  // end_x
  output->end_x = input->end_x;
  // end_y
  output->end_y = input->end_y;
  // viewport_height
  output->viewport_height = input->viewport_height;
  // viewport_width
  output->viewport_width = input->viewport_width;
  // focal_length
  output->focal_length = input->focal_length;
  // projection_matrix
  for (size_t i = 0; i < 16; ++i) {
    output->projection_matrix[i] = input->projection_matrix[i];
  }
  // camera_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->camera_pose), &(output->camera_pose)))
  {
    return false;
  }
  // is_deep_selection
  output->is_deep_selection = input->is_deep_selection;
  // polyline_x
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->polyline_x), &(output->polyline_x)))
  {
    return false;
  }
  // polyline_y
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->polyline_y), &(output->polyline_y)))
  {
    return false;
  }
  return true;
}

rviz_cloud_annotation__msg__RectangleSelectionViewport *
rviz_cloud_annotation__msg__RectangleSelectionViewport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_cloud_annotation__msg__RectangleSelectionViewport * msg = (rviz_cloud_annotation__msg__RectangleSelectionViewport *)allocator.allocate(sizeof(rviz_cloud_annotation__msg__RectangleSelectionViewport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_cloud_annotation__msg__RectangleSelectionViewport));
  bool success = rviz_cloud_annotation__msg__RectangleSelectionViewport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_cloud_annotation__msg__RectangleSelectionViewport__destroy(rviz_cloud_annotation__msg__RectangleSelectionViewport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__init(rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_cloud_annotation__msg__RectangleSelectionViewport * data = NULL;

  if (size) {
    data = (rviz_cloud_annotation__msg__RectangleSelectionViewport *)allocator.zero_allocate(size, sizeof(rviz_cloud_annotation__msg__RectangleSelectionViewport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_cloud_annotation__msg__RectangleSelectionViewport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__fini(rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence *
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * array = (rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence *)allocator.allocate(sizeof(rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__destroy(rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__are_equal(const rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * lhs, const rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_cloud_annotation__msg__RectangleSelectionViewport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__copy(
  const rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * input,
  rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_cloud_annotation__msg__RectangleSelectionViewport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_cloud_annotation__msg__RectangleSelectionViewport * data =
      (rviz_cloud_annotation__msg__RectangleSelectionViewport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_cloud_annotation__msg__RectangleSelectionViewport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_cloud_annotation__msg__RectangleSelectionViewport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
