// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__struct.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _HandEyeCalibrationResidual__ros_msg_type = zivid_interfaces__msg__HandEyeCalibrationResidual;

static bool _HandEyeCalibrationResidual__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HandEyeCalibrationResidual__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationResidual__ros_msg_type *>(untyped_ros_message);
  // Field name: rotation
  {
    cdr << ros_message->rotation;
  }

  // Field name: translation
  {
    cdr << ros_message->translation;
  }

  return true;
}

static bool _HandEyeCalibrationResidual__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HandEyeCalibrationResidual__ros_msg_type * ros_message = static_cast<_HandEyeCalibrationResidual__ros_msg_type *>(untyped_ros_message);
  // Field name: rotation
  {
    cdr >> ros_message->rotation;
  }

  // Field name: translation
  {
    cdr >> ros_message->translation;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__msg__HandEyeCalibrationResidual(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationResidual__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationResidual__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rotation
  {
    size_t item_size = sizeof(ros_message->rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name translation
  {
    size_t item_size = sizeof(ros_message->translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HandEyeCalibrationResidual__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__msg__HandEyeCalibrationResidual(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__msg__HandEyeCalibrationResidual(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: translation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__msg__HandEyeCalibrationResidual;
    is_plain =
      (
      offsetof(DataType, translation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HandEyeCalibrationResidual__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__msg__HandEyeCalibrationResidual(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandEyeCalibrationResidual = {
  "zivid_interfaces::msg",
  "HandEyeCalibrationResidual",
  _HandEyeCalibrationResidual__cdr_serialize,
  _HandEyeCalibrationResidual__cdr_deserialize,
  _HandEyeCalibrationResidual__get_serialized_size,
  _HandEyeCalibrationResidual__max_serialized_size
};

static rosidl_message_type_support_t _HandEyeCalibrationResidual__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandEyeCalibrationResidual,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, HandEyeCalibrationResidual)() {
  return &_HandEyeCalibrationResidual__type_support;
}

#if defined(__cplusplus)
}
#endif
