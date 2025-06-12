// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__functions.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__struct.h"


// Include directives for member types
// Member `calibration_board`
#include "zivid_interfaces/msg/fixed_placement_of_calibration_board.h"
// Member `calibration_board`
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__rosidl_typesupport_introspection_c.h"
// Member `marker_dictionary`
#include "rosidl_runtime_c/string_functions.h"
// Member `markers`
#include "zivid_interfaces/msg/fixed_placement_of_fiducial_marker.h"
// Member `markers`
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__init(message_memory);
}

void zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_fini_function(void * message_memory)
{
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(message_memory);
}

size_t zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__size_function__FixedPlacementOfCalibrationObjects__markers(
  const void * untyped_member)
{
  const zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * member =
    (const zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__get_const_function__FixedPlacementOfCalibrationObjects__markers(
  const void * untyped_member, size_t index)
{
  const zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * member =
    (const zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__get_function__FixedPlacementOfCalibrationObjects__markers(
  void * untyped_member, size_t index)
{
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * member =
    (zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__fetch_function__FixedPlacementOfCalibrationObjects__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const zivid_interfaces__msg__FixedPlacementOfFiducialMarker * item =
    ((const zivid_interfaces__msg__FixedPlacementOfFiducialMarker *)
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__get_const_function__FixedPlacementOfCalibrationObjects__markers(untyped_member, index));
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker * value =
    (zivid_interfaces__msg__FixedPlacementOfFiducialMarker *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__assign_function__FixedPlacementOfCalibrationObjects__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker * item =
    ((zivid_interfaces__msg__FixedPlacementOfFiducialMarker *)
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__get_function__FixedPlacementOfCalibrationObjects__markers(untyped_member, index));
  const zivid_interfaces__msg__FixedPlacementOfFiducialMarker * value =
    (const zivid_interfaces__msg__FixedPlacementOfFiducialMarker *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__resize_function__FixedPlacementOfCalibrationObjects__markers(
  void * untyped_member, size_t size)
{
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * member =
    (zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence *)(untyped_member);
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__fini(member);
  return zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_member_array[4] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_board",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects, calibration_board),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marker_dictionary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects, marker_dictionary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects, markers),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__size_function__FixedPlacementOfCalibrationObjects__markers,  // size() function pointer
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__get_const_function__FixedPlacementOfCalibrationObjects__markers,  // get_const(index) function pointer
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__get_function__FixedPlacementOfCalibrationObjects__markers,  // get(index) function pointer
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__fetch_function__FixedPlacementOfCalibrationObjects__markers,  // fetch(index, &value) function pointer
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__assign_function__FixedPlacementOfCalibrationObjects__markers,  // assign(index, value) function pointer
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__resize_function__FixedPlacementOfCalibrationObjects__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_members = {
  "zivid_interfaces__msg",  // message namespace
  "FixedPlacementOfCalibrationObjects",  // message name
  4,  // number of fields
  sizeof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects),
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_member_array,  // message members
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_type_support_handle = {
  0,
  &zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, FixedPlacementOfCalibrationObjects)() {
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, FixedPlacementOfCalibrationBoard)();
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, FixedPlacementOfFiducialMarker)();
  if (!zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__rosidl_typesupport_introspection_c__FixedPlacementOfCalibrationObjects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
