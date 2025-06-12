// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gui_msgs:msg/SettingTool.idl
// generated code does not contain a copyright notice
#include "gui_msgs/msg/detail/setting_tool__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gui_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gui_msgs/msg/detail/setting_tool__struct.h"
#include "gui_msgs/msg/detail/setting_tool__functions.h"
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


using _SettingTool__ros_msg_type = gui_msgs__msg__SettingTool;

static bool _SettingTool__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SettingTool__ros_msg_type * ros_message = static_cast<const _SettingTool__ros_msg_type *>(untyped_ros_message);
  // Field name: tool_rpm
  {
    cdr << ros_message->tool_rpm;
  }

  // Field name: feed_rate
  {
    cdr << ros_message->feed_rate;
  }

  // Field name: tool_diameter
  {
    cdr << ros_message->tool_diameter;
  }

  // Field name: tool_length
  {
    cdr << ros_message->tool_length;
  }

  // Field name: tool_pressure
  {
    cdr << ros_message->tool_pressure;
  }

  // Field name: sanding
  {
    cdr << ros_message->sanding;
  }

  // Field name: dir
  {
    cdr << ros_message->dir;
  }

  // Field name: tooltype
  {
    cdr << ros_message->tooltype;
  }

  // Field name: toolgeometry
  {
    cdr << ros_message->toolgeometry;
  }

  return true;
}

static bool _SettingTool__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SettingTool__ros_msg_type * ros_message = static_cast<_SettingTool__ros_msg_type *>(untyped_ros_message);
  // Field name: tool_rpm
  {
    cdr >> ros_message->tool_rpm;
  }

  // Field name: feed_rate
  {
    cdr >> ros_message->feed_rate;
  }

  // Field name: tool_diameter
  {
    cdr >> ros_message->tool_diameter;
  }

  // Field name: tool_length
  {
    cdr >> ros_message->tool_length;
  }

  // Field name: tool_pressure
  {
    cdr >> ros_message->tool_pressure;
  }

  // Field name: sanding
  {
    cdr >> ros_message->sanding;
  }

  // Field name: dir
  {
    cdr >> ros_message->dir;
  }

  // Field name: tooltype
  {
    cdr >> ros_message->tooltype;
  }

  // Field name: toolgeometry
  {
    cdr >> ros_message->toolgeometry;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gui_msgs
size_t get_serialized_size_gui_msgs__msg__SettingTool(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SettingTool__ros_msg_type * ros_message = static_cast<const _SettingTool__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tool_rpm
  {
    size_t item_size = sizeof(ros_message->tool_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name feed_rate
  {
    size_t item_size = sizeof(ros_message->feed_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_diameter
  {
    size_t item_size = sizeof(ros_message->tool_diameter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_length
  {
    size_t item_size = sizeof(ros_message->tool_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_pressure
  {
    size_t item_size = sizeof(ros_message->tool_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sanding
  {
    size_t item_size = sizeof(ros_message->sanding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dir
  {
    size_t item_size = sizeof(ros_message->dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tooltype
  {
    size_t item_size = sizeof(ros_message->tooltype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name toolgeometry
  {
    size_t item_size = sizeof(ros_message->toolgeometry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SettingTool__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gui_msgs__msg__SettingTool(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gui_msgs
size_t max_serialized_size_gui_msgs__msg__SettingTool(
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

  // member: tool_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: feed_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tool_diameter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tool_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tool_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sanding
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tooltype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: toolgeometry
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
    using DataType = gui_msgs__msg__SettingTool;
    is_plain =
      (
      offsetof(DataType, toolgeometry) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SettingTool__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gui_msgs__msg__SettingTool(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SettingTool = {
  "gui_msgs::msg",
  "SettingTool",
  _SettingTool__cdr_serialize,
  _SettingTool__cdr_deserialize,
  _SettingTool__get_serialized_size,
  _SettingTool__max_serialized_size
};

static rosidl_message_type_support_t _SettingTool__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SettingTool,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gui_msgs, msg, SettingTool)() {
  return &_SettingTool__type_support;
}

#if defined(__cplusplus)
}
#endif
