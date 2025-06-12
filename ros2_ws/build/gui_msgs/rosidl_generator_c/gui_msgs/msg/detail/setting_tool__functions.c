// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gui_msgs:msg/SettingTool.idl
// generated code does not contain a copyright notice
#include "gui_msgs/msg/detail/setting_tool__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gui_msgs__msg__SettingTool__init(gui_msgs__msg__SettingTool * msg)
{
  if (!msg) {
    return false;
  }
  // tool_rpm
  // feed_rate
  // tool_diameter
  // tool_length
  // tool_pressure
  // sanding
  // dir
  // tooltype
  // toolgeometry
  return true;
}

void
gui_msgs__msg__SettingTool__fini(gui_msgs__msg__SettingTool * msg)
{
  if (!msg) {
    return;
  }
  // tool_rpm
  // feed_rate
  // tool_diameter
  // tool_length
  // tool_pressure
  // sanding
  // dir
  // tooltype
  // toolgeometry
}

bool
gui_msgs__msg__SettingTool__are_equal(const gui_msgs__msg__SettingTool * lhs, const gui_msgs__msg__SettingTool * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tool_rpm
  if (lhs->tool_rpm != rhs->tool_rpm) {
    return false;
  }
  // feed_rate
  if (lhs->feed_rate != rhs->feed_rate) {
    return false;
  }
  // tool_diameter
  if (lhs->tool_diameter != rhs->tool_diameter) {
    return false;
  }
  // tool_length
  if (lhs->tool_length != rhs->tool_length) {
    return false;
  }
  // tool_pressure
  if (lhs->tool_pressure != rhs->tool_pressure) {
    return false;
  }
  // sanding
  if (lhs->sanding != rhs->sanding) {
    return false;
  }
  // dir
  if (lhs->dir != rhs->dir) {
    return false;
  }
  // tooltype
  if (lhs->tooltype != rhs->tooltype) {
    return false;
  }
  // toolgeometry
  if (lhs->toolgeometry != rhs->toolgeometry) {
    return false;
  }
  return true;
}

bool
gui_msgs__msg__SettingTool__copy(
  const gui_msgs__msg__SettingTool * input,
  gui_msgs__msg__SettingTool * output)
{
  if (!input || !output) {
    return false;
  }
  // tool_rpm
  output->tool_rpm = input->tool_rpm;
  // feed_rate
  output->feed_rate = input->feed_rate;
  // tool_diameter
  output->tool_diameter = input->tool_diameter;
  // tool_length
  output->tool_length = input->tool_length;
  // tool_pressure
  output->tool_pressure = input->tool_pressure;
  // sanding
  output->sanding = input->sanding;
  // dir
  output->dir = input->dir;
  // tooltype
  output->tooltype = input->tooltype;
  // toolgeometry
  output->toolgeometry = input->toolgeometry;
  return true;
}

gui_msgs__msg__SettingTool *
gui_msgs__msg__SettingTool__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__msg__SettingTool * msg = (gui_msgs__msg__SettingTool *)allocator.allocate(sizeof(gui_msgs__msg__SettingTool), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gui_msgs__msg__SettingTool));
  bool success = gui_msgs__msg__SettingTool__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gui_msgs__msg__SettingTool__destroy(gui_msgs__msg__SettingTool * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gui_msgs__msg__SettingTool__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gui_msgs__msg__SettingTool__Sequence__init(gui_msgs__msg__SettingTool__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__msg__SettingTool * data = NULL;

  if (size) {
    data = (gui_msgs__msg__SettingTool *)allocator.zero_allocate(size, sizeof(gui_msgs__msg__SettingTool), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gui_msgs__msg__SettingTool__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gui_msgs__msg__SettingTool__fini(&data[i - 1]);
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
gui_msgs__msg__SettingTool__Sequence__fini(gui_msgs__msg__SettingTool__Sequence * array)
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
      gui_msgs__msg__SettingTool__fini(&array->data[i]);
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

gui_msgs__msg__SettingTool__Sequence *
gui_msgs__msg__SettingTool__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__msg__SettingTool__Sequence * array = (gui_msgs__msg__SettingTool__Sequence *)allocator.allocate(sizeof(gui_msgs__msg__SettingTool__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gui_msgs__msg__SettingTool__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gui_msgs__msg__SettingTool__Sequence__destroy(gui_msgs__msg__SettingTool__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gui_msgs__msg__SettingTool__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gui_msgs__msg__SettingTool__Sequence__are_equal(const gui_msgs__msg__SettingTool__Sequence * lhs, const gui_msgs__msg__SettingTool__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gui_msgs__msg__SettingTool__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gui_msgs__msg__SettingTool__Sequence__copy(
  const gui_msgs__msg__SettingTool__Sequence * input,
  gui_msgs__msg__SettingTool__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gui_msgs__msg__SettingTool);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gui_msgs__msg__SettingTool * data =
      (gui_msgs__msg__SettingTool *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gui_msgs__msg__SettingTool__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gui_msgs__msg__SettingTool__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gui_msgs__msg__SettingTool__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
