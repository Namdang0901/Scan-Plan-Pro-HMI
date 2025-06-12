// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rviz_cloud_annotation:msg/UndoRedoState.idl
// generated code does not contain a copyright notice
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rviz_cloud_annotation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__struct.h"
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // redo_description, undo_description
#include "rosidl_runtime_c/string_functions.h"  // redo_description, undo_description

// forward declare type support functions


using _UndoRedoState__ros_msg_type = rviz_cloud_annotation__msg__UndoRedoState;

static bool _UndoRedoState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UndoRedoState__ros_msg_type * ros_message = static_cast<const _UndoRedoState__ros_msg_type *>(untyped_ros_message);
  // Field name: redo_enabled
  {
    cdr << (ros_message->redo_enabled ? true : false);
  }

  // Field name: redo_description
  {
    const rosidl_runtime_c__String * str = &ros_message->redo_description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: undo_enabled
  {
    cdr << (ros_message->undo_enabled ? true : false);
  }

  // Field name: undo_description
  {
    const rosidl_runtime_c__String * str = &ros_message->undo_description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _UndoRedoState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UndoRedoState__ros_msg_type * ros_message = static_cast<_UndoRedoState__ros_msg_type *>(untyped_ros_message);
  // Field name: redo_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->redo_enabled = tmp ? true : false;
  }

  // Field name: redo_description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->redo_description.data) {
      rosidl_runtime_c__String__init(&ros_message->redo_description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->redo_description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'redo_description'\n");
      return false;
    }
  }

  // Field name: undo_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->undo_enabled = tmp ? true : false;
  }

  // Field name: undo_description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->undo_description.data) {
      rosidl_runtime_c__String__init(&ros_message->undo_description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->undo_description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'undo_description'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rviz_cloud_annotation
size_t get_serialized_size_rviz_cloud_annotation__msg__UndoRedoState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UndoRedoState__ros_msg_type * ros_message = static_cast<const _UndoRedoState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name redo_enabled
  {
    size_t item_size = sizeof(ros_message->redo_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name redo_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->redo_description.size + 1);
  // field.name undo_enabled
  {
    size_t item_size = sizeof(ros_message->undo_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undo_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->undo_description.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _UndoRedoState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rviz_cloud_annotation__msg__UndoRedoState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rviz_cloud_annotation
size_t max_serialized_size_rviz_cloud_annotation__msg__UndoRedoState(
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

  // member: redo_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: redo_description
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: undo_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: undo_description
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rviz_cloud_annotation__msg__UndoRedoState;
    is_plain =
      (
      offsetof(DataType, undo_description) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UndoRedoState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rviz_cloud_annotation__msg__UndoRedoState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UndoRedoState = {
  "rviz_cloud_annotation::msg",
  "UndoRedoState",
  _UndoRedoState__cdr_serialize,
  _UndoRedoState__cdr_deserialize,
  _UndoRedoState__get_serialized_size,
  _UndoRedoState__max_serialized_size
};

static rosidl_message_type_support_t _UndoRedoState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UndoRedoState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rviz_cloud_annotation, msg, UndoRedoState)() {
  return &_UndoRedoState__type_support;
}

#if defined(__cplusplus)
}
#endif
