// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_cloud_annotation:msg/UndoRedoState.idl
// generated code does not contain a copyright notice
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `redo_description`
// Member `undo_description`
#include "rosidl_runtime_c/string_functions.h"

bool
rviz_cloud_annotation__msg__UndoRedoState__init(rviz_cloud_annotation__msg__UndoRedoState * msg)
{
  if (!msg) {
    return false;
  }
  // redo_enabled
  // redo_description
  if (!rosidl_runtime_c__String__init(&msg->redo_description)) {
    rviz_cloud_annotation__msg__UndoRedoState__fini(msg);
    return false;
  }
  // undo_enabled
  // undo_description
  if (!rosidl_runtime_c__String__init(&msg->undo_description)) {
    rviz_cloud_annotation__msg__UndoRedoState__fini(msg);
    return false;
  }
  return true;
}

void
rviz_cloud_annotation__msg__UndoRedoState__fini(rviz_cloud_annotation__msg__UndoRedoState * msg)
{
  if (!msg) {
    return;
  }
  // redo_enabled
  // redo_description
  rosidl_runtime_c__String__fini(&msg->redo_description);
  // undo_enabled
  // undo_description
  rosidl_runtime_c__String__fini(&msg->undo_description);
}

bool
rviz_cloud_annotation__msg__UndoRedoState__are_equal(const rviz_cloud_annotation__msg__UndoRedoState * lhs, const rviz_cloud_annotation__msg__UndoRedoState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // redo_enabled
  if (lhs->redo_enabled != rhs->redo_enabled) {
    return false;
  }
  // redo_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->redo_description), &(rhs->redo_description)))
  {
    return false;
  }
  // undo_enabled
  if (lhs->undo_enabled != rhs->undo_enabled) {
    return false;
  }
  // undo_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->undo_description), &(rhs->undo_description)))
  {
    return false;
  }
  return true;
}

bool
rviz_cloud_annotation__msg__UndoRedoState__copy(
  const rviz_cloud_annotation__msg__UndoRedoState * input,
  rviz_cloud_annotation__msg__UndoRedoState * output)
{
  if (!input || !output) {
    return false;
  }
  // redo_enabled
  output->redo_enabled = input->redo_enabled;
  // redo_description
  if (!rosidl_runtime_c__String__copy(
      &(input->redo_description), &(output->redo_description)))
  {
    return false;
  }
  // undo_enabled
  output->undo_enabled = input->undo_enabled;
  // undo_description
  if (!rosidl_runtime_c__String__copy(
      &(input->undo_description), &(output->undo_description)))
  {
    return false;
  }
  return true;
}

rviz_cloud_annotation__msg__UndoRedoState *
rviz_cloud_annotation__msg__UndoRedoState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_cloud_annotation__msg__UndoRedoState * msg = (rviz_cloud_annotation__msg__UndoRedoState *)allocator.allocate(sizeof(rviz_cloud_annotation__msg__UndoRedoState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_cloud_annotation__msg__UndoRedoState));
  bool success = rviz_cloud_annotation__msg__UndoRedoState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_cloud_annotation__msg__UndoRedoState__destroy(rviz_cloud_annotation__msg__UndoRedoState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_cloud_annotation__msg__UndoRedoState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_cloud_annotation__msg__UndoRedoState__Sequence__init(rviz_cloud_annotation__msg__UndoRedoState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_cloud_annotation__msg__UndoRedoState * data = NULL;

  if (size) {
    data = (rviz_cloud_annotation__msg__UndoRedoState *)allocator.zero_allocate(size, sizeof(rviz_cloud_annotation__msg__UndoRedoState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_cloud_annotation__msg__UndoRedoState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_cloud_annotation__msg__UndoRedoState__fini(&data[i - 1]);
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
rviz_cloud_annotation__msg__UndoRedoState__Sequence__fini(rviz_cloud_annotation__msg__UndoRedoState__Sequence * array)
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
      rviz_cloud_annotation__msg__UndoRedoState__fini(&array->data[i]);
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

rviz_cloud_annotation__msg__UndoRedoState__Sequence *
rviz_cloud_annotation__msg__UndoRedoState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_cloud_annotation__msg__UndoRedoState__Sequence * array = (rviz_cloud_annotation__msg__UndoRedoState__Sequence *)allocator.allocate(sizeof(rviz_cloud_annotation__msg__UndoRedoState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_cloud_annotation__msg__UndoRedoState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_cloud_annotation__msg__UndoRedoState__Sequence__destroy(rviz_cloud_annotation__msg__UndoRedoState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_cloud_annotation__msg__UndoRedoState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_cloud_annotation__msg__UndoRedoState__Sequence__are_equal(const rviz_cloud_annotation__msg__UndoRedoState__Sequence * lhs, const rviz_cloud_annotation__msg__UndoRedoState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_cloud_annotation__msg__UndoRedoState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_cloud_annotation__msg__UndoRedoState__Sequence__copy(
  const rviz_cloud_annotation__msg__UndoRedoState__Sequence * input,
  rviz_cloud_annotation__msg__UndoRedoState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_cloud_annotation__msg__UndoRedoState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_cloud_annotation__msg__UndoRedoState * data =
      (rviz_cloud_annotation__msg__UndoRedoState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_cloud_annotation__msg__UndoRedoState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_cloud_annotation__msg__UndoRedoState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_cloud_annotation__msg__UndoRedoState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
