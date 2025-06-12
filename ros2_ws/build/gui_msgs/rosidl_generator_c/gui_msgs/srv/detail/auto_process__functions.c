// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gui_msgs:srv/AutoProcess.idl
// generated code does not contain a copyright notice
#include "gui_msgs/srv/detail/auto_process__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
gui_msgs__srv__AutoProcess_Request__init(gui_msgs__srv__AutoProcess_Request * msg)
{
  if (!msg) {
    return false;
  }
  // req
  return true;
}

void
gui_msgs__srv__AutoProcess_Request__fini(gui_msgs__srv__AutoProcess_Request * msg)
{
  if (!msg) {
    return;
  }
  // req
}

bool
gui_msgs__srv__AutoProcess_Request__are_equal(const gui_msgs__srv__AutoProcess_Request * lhs, const gui_msgs__srv__AutoProcess_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // req
  if (lhs->req != rhs->req) {
    return false;
  }
  return true;
}

bool
gui_msgs__srv__AutoProcess_Request__copy(
  const gui_msgs__srv__AutoProcess_Request * input,
  gui_msgs__srv__AutoProcess_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // req
  output->req = input->req;
  return true;
}

gui_msgs__srv__AutoProcess_Request *
gui_msgs__srv__AutoProcess_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__srv__AutoProcess_Request * msg = (gui_msgs__srv__AutoProcess_Request *)allocator.allocate(sizeof(gui_msgs__srv__AutoProcess_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gui_msgs__srv__AutoProcess_Request));
  bool success = gui_msgs__srv__AutoProcess_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gui_msgs__srv__AutoProcess_Request__destroy(gui_msgs__srv__AutoProcess_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gui_msgs__srv__AutoProcess_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gui_msgs__srv__AutoProcess_Request__Sequence__init(gui_msgs__srv__AutoProcess_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__srv__AutoProcess_Request * data = NULL;

  if (size) {
    data = (gui_msgs__srv__AutoProcess_Request *)allocator.zero_allocate(size, sizeof(gui_msgs__srv__AutoProcess_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gui_msgs__srv__AutoProcess_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gui_msgs__srv__AutoProcess_Request__fini(&data[i - 1]);
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
gui_msgs__srv__AutoProcess_Request__Sequence__fini(gui_msgs__srv__AutoProcess_Request__Sequence * array)
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
      gui_msgs__srv__AutoProcess_Request__fini(&array->data[i]);
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

gui_msgs__srv__AutoProcess_Request__Sequence *
gui_msgs__srv__AutoProcess_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__srv__AutoProcess_Request__Sequence * array = (gui_msgs__srv__AutoProcess_Request__Sequence *)allocator.allocate(sizeof(gui_msgs__srv__AutoProcess_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gui_msgs__srv__AutoProcess_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gui_msgs__srv__AutoProcess_Request__Sequence__destroy(gui_msgs__srv__AutoProcess_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gui_msgs__srv__AutoProcess_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gui_msgs__srv__AutoProcess_Request__Sequence__are_equal(const gui_msgs__srv__AutoProcess_Request__Sequence * lhs, const gui_msgs__srv__AutoProcess_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gui_msgs__srv__AutoProcess_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gui_msgs__srv__AutoProcess_Request__Sequence__copy(
  const gui_msgs__srv__AutoProcess_Request__Sequence * input,
  gui_msgs__srv__AutoProcess_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gui_msgs__srv__AutoProcess_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gui_msgs__srv__AutoProcess_Request * data =
      (gui_msgs__srv__AutoProcess_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gui_msgs__srv__AutoProcess_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gui_msgs__srv__AutoProcess_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gui_msgs__srv__AutoProcess_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
gui_msgs__srv__AutoProcess_Response__init(gui_msgs__srv__AutoProcess_Response * msg)
{
  if (!msg) {
    return false;
  }
  // res
  return true;
}

void
gui_msgs__srv__AutoProcess_Response__fini(gui_msgs__srv__AutoProcess_Response * msg)
{
  if (!msg) {
    return;
  }
  // res
}

bool
gui_msgs__srv__AutoProcess_Response__are_equal(const gui_msgs__srv__AutoProcess_Response * lhs, const gui_msgs__srv__AutoProcess_Response * rhs)
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
gui_msgs__srv__AutoProcess_Response__copy(
  const gui_msgs__srv__AutoProcess_Response * input,
  gui_msgs__srv__AutoProcess_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  return true;
}

gui_msgs__srv__AutoProcess_Response *
gui_msgs__srv__AutoProcess_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__srv__AutoProcess_Response * msg = (gui_msgs__srv__AutoProcess_Response *)allocator.allocate(sizeof(gui_msgs__srv__AutoProcess_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gui_msgs__srv__AutoProcess_Response));
  bool success = gui_msgs__srv__AutoProcess_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gui_msgs__srv__AutoProcess_Response__destroy(gui_msgs__srv__AutoProcess_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gui_msgs__srv__AutoProcess_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gui_msgs__srv__AutoProcess_Response__Sequence__init(gui_msgs__srv__AutoProcess_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__srv__AutoProcess_Response * data = NULL;

  if (size) {
    data = (gui_msgs__srv__AutoProcess_Response *)allocator.zero_allocate(size, sizeof(gui_msgs__srv__AutoProcess_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gui_msgs__srv__AutoProcess_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gui_msgs__srv__AutoProcess_Response__fini(&data[i - 1]);
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
gui_msgs__srv__AutoProcess_Response__Sequence__fini(gui_msgs__srv__AutoProcess_Response__Sequence * array)
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
      gui_msgs__srv__AutoProcess_Response__fini(&array->data[i]);
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

gui_msgs__srv__AutoProcess_Response__Sequence *
gui_msgs__srv__AutoProcess_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gui_msgs__srv__AutoProcess_Response__Sequence * array = (gui_msgs__srv__AutoProcess_Response__Sequence *)allocator.allocate(sizeof(gui_msgs__srv__AutoProcess_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gui_msgs__srv__AutoProcess_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gui_msgs__srv__AutoProcess_Response__Sequence__destroy(gui_msgs__srv__AutoProcess_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gui_msgs__srv__AutoProcess_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gui_msgs__srv__AutoProcess_Response__Sequence__are_equal(const gui_msgs__srv__AutoProcess_Response__Sequence * lhs, const gui_msgs__srv__AutoProcess_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gui_msgs__srv__AutoProcess_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gui_msgs__srv__AutoProcess_Response__Sequence__copy(
  const gui_msgs__srv__AutoProcess_Response__Sequence * input,
  gui_msgs__srv__AutoProcess_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gui_msgs__srv__AutoProcess_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gui_msgs__srv__AutoProcess_Response * data =
      (gui_msgs__srv__AutoProcess_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gui_msgs__srv__AutoProcess_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gui_msgs__srv__AutoProcess_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gui_msgs__srv__AutoProcess_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
