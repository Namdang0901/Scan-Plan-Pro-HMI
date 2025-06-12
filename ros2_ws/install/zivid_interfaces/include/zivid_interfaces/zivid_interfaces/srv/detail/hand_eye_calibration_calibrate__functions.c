// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `capture_handles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `fixed_objects`
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__functions.h"

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__init(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // configuration
  // capture_handles
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->capture_handles, 0)) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__fini(msg);
    return false;
  }
  // fixed_objects
  if (!zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__init(&msg->fixed_objects)) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__fini(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * msg)
{
  if (!msg) {
    return;
  }
  // configuration
  // capture_handles
  rosidl_runtime_c__int32__Sequence__fini(&msg->capture_handles);
  // fixed_objects
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(&msg->fixed_objects);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * lhs, const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // configuration
  if (lhs->configuration != rhs->configuration) {
    return false;
  }
  // capture_handles
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->capture_handles), &(rhs->capture_handles)))
  {
    return false;
  }
  // fixed_objects
  if (!zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__are_equal(
      &(lhs->fixed_objects), &(rhs->fixed_objects)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * input,
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // configuration
  output->configuration = input->configuration;
  // capture_handles
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->capture_handles), &(output->capture_handles)))
  {
    return false;
  }
  // fixed_objects
  if (!zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__copy(
      &(input->fixed_objects), &(output->fixed_objects)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * msg = (zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request));
  bool success = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__destroy(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence__init(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__fini(&data[i - 1]);
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
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence__fini(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence * array)
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
      zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__fini(&array->data[i]);
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

zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence * array = (zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence__destroy(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence * lhs, const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence * input,
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * data =
      (zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `residuals`
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__functions.h"

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__init(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(msg);
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(msg);
    return false;
  }
  // residuals
  if (!zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence__init(&msg->residuals, 0)) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
  // residuals
  zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence__fini(&msg->residuals);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * lhs, const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->transform), &(rhs->transform)))
  {
    return false;
  }
  // residuals
  if (!zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence__are_equal(
      &(lhs->residuals), &(rhs->residuals)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * input,
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->transform), &(output->transform)))
  {
    return false;
  }
  // residuals
  if (!zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence__copy(
      &(input->residuals), &(output->residuals)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * msg = (zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response));
  bool success = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__destroy(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence__init(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(&data[i - 1]);
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
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence__fini(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence * array)
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
      zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(&array->data[i]);
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

zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence * array = (zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence__destroy(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence * lhs, const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence * input,
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * data =
      (zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
