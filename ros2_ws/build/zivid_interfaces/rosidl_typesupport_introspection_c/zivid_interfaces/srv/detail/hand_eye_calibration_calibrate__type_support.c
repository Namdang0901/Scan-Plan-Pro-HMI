// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__functions.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__struct.h"


// Include directives for member types
// Member `capture_handles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `fixed_objects`
#include "zivid_interfaces/msg/fixed_placement_of_calibration_objects.h"
// Member `fixed_objects`
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__init(message_memory);
}

void zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_fini_function(void * message_memory)
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__fini(message_memory);
}

size_t zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__size_function__HandEyeCalibrationCalibrate_Request__capture_handles(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationCalibrate_Request__capture_handles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationCalibrate_Request__capture_handles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__fetch_function__HandEyeCalibrationCalibrate_Request__capture_handles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationCalibrate_Request__capture_handles(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__assign_function__HandEyeCalibrationCalibrate_Request__capture_handles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationCalibrate_Request__capture_handles(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__resize_function__HandEyeCalibrationCalibrate_Request__capture_handles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_member_array[3] = {
  {
    "configuration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request, configuration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "capture_handles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request, capture_handles),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__size_function__HandEyeCalibrationCalibrate_Request__capture_handles,  // size() function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationCalibrate_Request__capture_handles,  // get_const(index) function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationCalibrate_Request__capture_handles,  // get(index) function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__fetch_function__HandEyeCalibrationCalibrate_Request__capture_handles,  // fetch(index, &value) function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__assign_function__HandEyeCalibrationCalibrate_Request__capture_handles,  // assign(index, value) function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__resize_function__HandEyeCalibrationCalibrate_Request__capture_handles  // resize(index) function pointer
  },
  {
    "fixed_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request, fixed_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "HandEyeCalibrationCalibrate_Request",  // message name
  3,  // number of fields
  sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request),
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_member_array,  // message members
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Request)() {
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, FixedPlacementOfCalibrationObjects)();
  if (!zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `transform`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `residuals`
#include "zivid_interfaces/msg/hand_eye_calibration_residual.h"
// Member `residuals`
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__init(message_memory);
}

void zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_fini_function(void * message_memory)
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__fini(message_memory);
}

size_t zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__size_function__HandEyeCalibrationCalibrate_Response__residuals(
  const void * untyped_member)
{
  const zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence * member =
    (const zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationCalibrate_Response__residuals(
  const void * untyped_member, size_t index)
{
  const zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence * member =
    (const zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationCalibrate_Response__residuals(
  void * untyped_member, size_t index)
{
  zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence * member =
    (zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__fetch_function__HandEyeCalibrationCalibrate_Response__residuals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const zivid_interfaces__msg__HandEyeCalibrationResidual * item =
    ((const zivid_interfaces__msg__HandEyeCalibrationResidual *)
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationCalibrate_Response__residuals(untyped_member, index));
  zivid_interfaces__msg__HandEyeCalibrationResidual * value =
    (zivid_interfaces__msg__HandEyeCalibrationResidual *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__assign_function__HandEyeCalibrationCalibrate_Response__residuals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  zivid_interfaces__msg__HandEyeCalibrationResidual * item =
    ((zivid_interfaces__msg__HandEyeCalibrationResidual *)
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationCalibrate_Response__residuals(untyped_member, index));
  const zivid_interfaces__msg__HandEyeCalibrationResidual * value =
    (const zivid_interfaces__msg__HandEyeCalibrationResidual *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__resize_function__HandEyeCalibrationCalibrate_Response__residuals(
  void * untyped_member, size_t size)
{
  zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence * member =
    (zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence *)(untyped_member);
  zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence__fini(member);
  return zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "residuals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response, residuals),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__size_function__HandEyeCalibrationCalibrate_Response__residuals,  // size() function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationCalibrate_Response__residuals,  // get_const(index) function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationCalibrate_Response__residuals,  // get(index) function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__fetch_function__HandEyeCalibrationCalibrate_Response__residuals,  // fetch(index, &value) function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__assign_function__HandEyeCalibrationCalibrate_Response__residuals,  // assign(index, value) function pointer
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__resize_function__HandEyeCalibrationCalibrate_Response__residuals  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "HandEyeCalibrationCalibrate_Response",  // message name
  4,  // number of fields
  sizeof(zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response),
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_member_array,  // message members
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Response)() {
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, HandEyeCalibrationResidual)();
  if (!zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_service_members = {
  "zivid_interfaces__srv",  // service namespace
  "HandEyeCalibrationCalibrate",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Request_message_type_support_handle,
  NULL  // response message
  // zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_Response_message_type_support_handle
};

static rosidl_service_type_support_t zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_service_type_support_handle = {
  0,
  &zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationCalibrate)() {
  if (!zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_service_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Response)()->data;
  }

  return &zivid_interfaces__srv__detail__hand_eye_calibration_calibrate__rosidl_typesupport_introspection_c__HandEyeCalibrationCalibrate_service_type_support_handle;
}
