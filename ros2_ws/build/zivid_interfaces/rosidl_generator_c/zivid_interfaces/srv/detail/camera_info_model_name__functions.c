// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:srv/CameraInfoModelName.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/srv/detail/camera_info_model_name__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
zivid_interfaces__srv__CameraInfoModelName_Request__init(zivid_interfaces__srv__CameraInfoModelName_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
zivid_interfaces__srv__CameraInfoModelName_Request__fini(zivid_interfaces__srv__CameraInfoModelName_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
zivid_interfaces__srv__CameraInfoModelName_Request__are_equal(const zivid_interfaces__srv__CameraInfoModelName_Request * lhs, const zivid_interfaces__srv__CameraInfoModelName_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoModelName_Request__copy(
  const zivid_interfaces__srv__CameraInfoModelName_Request * input,
  zivid_interfaces__srv__CameraInfoModelName_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

zivid_interfaces__srv__CameraInfoModelName_Request *
zivid_interfaces__srv__CameraInfoModelName_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoModelName_Request * msg = (zivid_interfaces__srv__CameraInfoModelName_Request *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoModelName_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__CameraInfoModelName_Request));
  bool success = zivid_interfaces__srv__CameraInfoModelName_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__CameraInfoModelName_Request__destroy(zivid_interfaces__srv__CameraInfoModelName_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__CameraInfoModelName_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__CameraInfoModelName_Request__Sequence__init(zivid_interfaces__srv__CameraInfoModelName_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoModelName_Request * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__CameraInfoModelName_Request *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__CameraInfoModelName_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__CameraInfoModelName_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__CameraInfoModelName_Request__fini(&data[i - 1]);
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
zivid_interfaces__srv__CameraInfoModelName_Request__Sequence__fini(zivid_interfaces__srv__CameraInfoModelName_Request__Sequence * array)
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
      zivid_interfaces__srv__CameraInfoModelName_Request__fini(&array->data[i]);
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

zivid_interfaces__srv__CameraInfoModelName_Request__Sequence *
zivid_interfaces__srv__CameraInfoModelName_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoModelName_Request__Sequence * array = (zivid_interfaces__srv__CameraInfoModelName_Request__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoModelName_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__CameraInfoModelName_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__CameraInfoModelName_Request__Sequence__destroy(zivid_interfaces__srv__CameraInfoModelName_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__CameraInfoModelName_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__CameraInfoModelName_Request__Sequence__are_equal(const zivid_interfaces__srv__CameraInfoModelName_Request__Sequence * lhs, const zivid_interfaces__srv__CameraInfoModelName_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoModelName_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoModelName_Request__Sequence__copy(
  const zivid_interfaces__srv__CameraInfoModelName_Request__Sequence * input,
  zivid_interfaces__srv__CameraInfoModelName_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__CameraInfoModelName_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__CameraInfoModelName_Request * data =
      (zivid_interfaces__srv__CameraInfoModelName_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__CameraInfoModelName_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__CameraInfoModelName_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoModelName_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"

bool
zivid_interfaces__srv__CameraInfoModelName_Response__init(zivid_interfaces__srv__CameraInfoModelName_Response * msg)
{
  if (!msg) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    zivid_interfaces__srv__CameraInfoModelName_Response__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__srv__CameraInfoModelName_Response__fini(zivid_interfaces__srv__CameraInfoModelName_Response * msg)
{
  if (!msg) {
    return;
  }
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
}

bool
zivid_interfaces__srv__CameraInfoModelName_Response__are_equal(const zivid_interfaces__srv__CameraInfoModelName_Response * lhs, const zivid_interfaces__srv__CameraInfoModelName_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoModelName_Response__copy(
  const zivid_interfaces__srv__CameraInfoModelName_Response * input,
  zivid_interfaces__srv__CameraInfoModelName_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__srv__CameraInfoModelName_Response *
zivid_interfaces__srv__CameraInfoModelName_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoModelName_Response * msg = (zivid_interfaces__srv__CameraInfoModelName_Response *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoModelName_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__CameraInfoModelName_Response));
  bool success = zivid_interfaces__srv__CameraInfoModelName_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__CameraInfoModelName_Response__destroy(zivid_interfaces__srv__CameraInfoModelName_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__CameraInfoModelName_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__CameraInfoModelName_Response__Sequence__init(zivid_interfaces__srv__CameraInfoModelName_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoModelName_Response * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__CameraInfoModelName_Response *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__CameraInfoModelName_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__CameraInfoModelName_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__CameraInfoModelName_Response__fini(&data[i - 1]);
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
zivid_interfaces__srv__CameraInfoModelName_Response__Sequence__fini(zivid_interfaces__srv__CameraInfoModelName_Response__Sequence * array)
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
      zivid_interfaces__srv__CameraInfoModelName_Response__fini(&array->data[i]);
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

zivid_interfaces__srv__CameraInfoModelName_Response__Sequence *
zivid_interfaces__srv__CameraInfoModelName_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoModelName_Response__Sequence * array = (zivid_interfaces__srv__CameraInfoModelName_Response__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoModelName_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__CameraInfoModelName_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__CameraInfoModelName_Response__Sequence__destroy(zivid_interfaces__srv__CameraInfoModelName_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__CameraInfoModelName_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__CameraInfoModelName_Response__Sequence__are_equal(const zivid_interfaces__srv__CameraInfoModelName_Response__Sequence * lhs, const zivid_interfaces__srv__CameraInfoModelName_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoModelName_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoModelName_Response__Sequence__copy(
  const zivid_interfaces__srv__CameraInfoModelName_Response__Sequence * input,
  zivid_interfaces__srv__CameraInfoModelName_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__CameraInfoModelName_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__CameraInfoModelName_Response * data =
      (zivid_interfaces__srv__CameraInfoModelName_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__CameraInfoModelName_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__CameraInfoModelName_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoModelName_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
