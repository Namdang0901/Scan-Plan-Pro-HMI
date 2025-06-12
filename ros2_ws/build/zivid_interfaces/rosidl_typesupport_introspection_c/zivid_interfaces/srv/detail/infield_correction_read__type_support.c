// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:srv/InfieldCorrectionRead.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/srv/detail/infield_correction_read__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"
#include "zivid_interfaces/srv/detail/infield_correction_read__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__InfieldCorrectionRead_Request__init(message_memory);
}

void zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_fini_function(void * message_memory)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "InfieldCorrectionRead_Request",  // message name
  1,  // number of fields
  sizeof(zivid_interfaces__srv__InfieldCorrectionRead_Request),
  zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_member_array,  // message members
  zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Request)() {
  if (!zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__rosidl_typesupport_introspection_c.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_correction_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `camera_correction_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__InfieldCorrectionRead_Response__init(message_memory);
}

void zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_fini_function(void * message_memory)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Response, success),  // bytes offset in struct
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
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_camera_correction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Response, has_camera_correction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_correction_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Response, camera_correction_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "InfieldCorrectionRead_Response",  // message name
  4,  // number of fields
  sizeof(zivid_interfaces__srv__InfieldCorrectionRead_Response),
  zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_member_array,  // message members
  zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Response)() {
  zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_members = {
  "zivid_interfaces__srv",  // service namespace
  "InfieldCorrectionRead",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle,
  NULL  // response message
  // zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle
};

static rosidl_service_type_support_t zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle = {
  0,
  &zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead)() {
  if (!zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Response)()->data;
  }

  return &zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle;
}
