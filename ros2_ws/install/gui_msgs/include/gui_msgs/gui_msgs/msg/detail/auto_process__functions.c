// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gui_msgs:msg/AutoProcess.idl
// generated code does not contain a copyright notice
#include "gui_msgs/msg/detail/auto_process__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gui_msgs__msg__AutoProcess__init(gui_msgs__msg__AutoProcess * msg)
{
  if (!msg) {
    return false;
  }
  // res
  return true;
}

void
gui_msgs__msg__AutoProcess__fini(gui_msgs__msg__AutoProcess * msg)
{
  if (!msg) {
    return;
  }
  // res
}

bool
gui_msgs__msg__AutoProcess__are_equal(const gui_msgs__msg__AutoProcess * lhs, const gui_msgs__msg__AutoProcess * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  return true;
}

bool
gui_msgs__msg__AutoProcess__copy(
  const gui_msgs__msg__AutoProcess * input,
  gui_msgs__msg__AutoProcess * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  return true;
}

gui_msgs__msg__AutoProcess *
gui_msgs__msg__AutoProcess__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__msg__AutoProcess * msg = (gui_msgs__msg__AutoProcess *)allocator.allocate(sizeof(gui_msgs__msg__AutoProcess), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gui_msgs__msg__AutoProcess));
  bool success = gui_msgs__msg__AutoProcess__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gui_msgs__msg__AutoProcess__destroy(gui_msgs__msg__AutoProcess * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gui_msgs__msg__AutoProcess__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gui_msgs__msg__AutoProcess__Sequence__init(gui_msgs__msg__AutoProcess__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__msg__AutoProcess * data = NULL;

  if (size) {
    data = (gui_msgs__msg__AutoProcess *)allocator.zero_allocate(size, sizeof(gui_msgs__msg__AutoProcess), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gui_msgs__msg__AutoProcess__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gui_msgs__msg__AutoProcess__fini(&data[i - 1]);
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
gui_msgs__msg__AutoProcess__Sequence__fini(gui_msgs__msg__AutoProcess__Sequence * array)
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
      gui_msgs__msg__AutoProcess__fini(&array->data[i]);
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

gui_msgs__msg__AutoProcess__Sequence *
gui_msgs__msg__AutoProcess__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__msg__AutoProcess__Sequence * array = (gui_msgs__msg__AutoProcess__Sequence *)allocator.allocate(sizeof(gui_msgs__msg__AutoProcess__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gui_msgs__msg__AutoProcess__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gui_msgs__msg__AutoProcess__Sequence__destroy(gui_msgs__msg__AutoProcess__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gui_msgs__msg__AutoProcess__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gui_msgs__msg__AutoProcess__Sequence__are_equal(const gui_msgs__msg__AutoProcess__Sequence * lhs, const gui_msgs__msg__AutoProcess__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gui_msgs__msg__AutoProcess__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gui_msgs__msg__AutoProcess__Sequence__copy(
  const gui_msgs__msg__AutoProcess__Sequence * input,
  gui_msgs__msg__AutoProcess__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gui_msgs__msg__AutoProcess);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gui_msgs__msg__AutoProcess * data =
      (gui_msgs__msg__AutoProcess *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gui_msgs__msg__AutoProcess__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gui_msgs__msg__AutoProcess__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gui_msgs__msg__AutoProcess__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
