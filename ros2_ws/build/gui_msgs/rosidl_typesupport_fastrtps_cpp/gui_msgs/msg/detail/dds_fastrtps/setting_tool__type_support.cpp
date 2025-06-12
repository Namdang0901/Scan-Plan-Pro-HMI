// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gui_msgs:msg/SettingTool.idl
// generated code does not contain a copyright notice
#include "gui_msgs/msg/detail/setting_tool__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gui_msgs/msg/detail/setting_tool__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace gui_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gui_msgs
cdr_serialize(
  const gui_msgs::msg::SettingTool & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tool_rpm
  cdr << ros_message.tool_rpm;
  // Member: feed_rate
  cdr << ros_message.feed_rate;
  // Member: tool_diameter
  cdr << ros_message.tool_diameter;
  // Member: tool_length
  cdr << ros_message.tool_length;
  // Member: tool_pressure
  cdr << ros_message.tool_pressure;
  // Member: sanding
  cdr << ros_message.sanding;
  // Member: dir
  cdr << ros_message.dir;
  // Member: tooltype
  cdr << ros_message.tooltype;
  // Member: toolgeometry
  cdr << ros_message.toolgeometry;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gui_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gui_msgs::msg::SettingTool & ros_message)
{
  // Member: tool_rpm
  cdr >> ros_message.tool_rpm;

  // Member: feed_rate
  cdr >> ros_message.feed_rate;

  // Member: tool_diameter
  cdr >> ros_message.tool_diameter;

  // Member: tool_length
  cdr >> ros_message.tool_length;

  // Member: tool_pressure
  cdr >> ros_message.tool_pressure;

  // Member: sanding
  cdr >> ros_message.sanding;

  // Member: dir
  cdr >> ros_message.dir;

  // Member: tooltype
  cdr >> ros_message.tooltype;

  // Member: toolgeometry
  cdr >> ros_message.toolgeometry;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gui_msgs
get_serialized_size(
  const gui_msgs::msg::SettingTool & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tool_rpm
  {
    size_t item_size = sizeof(ros_message.tool_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: feed_rate
  {
    size_t item_size = sizeof(ros_message.feed_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_diameter
  {
    size_t item_size = sizeof(ros_message.tool_diameter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_length
  {
    size_t item_size = sizeof(ros_message.tool_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_pressure
  {
    size_t item_size = sizeof(ros_message.tool_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sanding
  {
    size_t item_size = sizeof(ros_message.sanding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dir
  {
    size_t item_size = sizeof(ros_message.dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tooltype
  {
    size_t item_size = sizeof(ros_message.tooltype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: toolgeometry
  {
    size_t item_size = sizeof(ros_message.toolgeometry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gui_msgs
max_serialized_size_SettingTool(
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


  // Member: tool_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: feed_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tool_diameter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tool_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tool_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sanding
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tooltype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: toolgeometry
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
    using DataType = gui_msgs::msg::SettingTool;
    is_plain =
      (
      offsetof(DataType, toolgeometry) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SettingTool__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gui_msgs::msg::SettingTool *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SettingTool__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gui_msgs::msg::SettingTool *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SettingTool__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gui_msgs::msg::SettingTool *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SettingTool__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SettingTool(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SettingTool__callbacks = {
  "gui_msgs::msg",
  "SettingTool",
  _SettingTool__cdr_serialize,
  _SettingTool__cdr_deserialize,
  _SettingTool__get_serialized_size,
  _SettingTool__max_serialized_size
};

static rosidl_message_type_support_t _SettingTool__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SettingTool__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gui_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gui_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<gui_msgs::msg::SettingTool>()
{
  return &gui_msgs::msg::typesupport_fastrtps_cpp::_SettingTool__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gui_msgs, msg, SettingTool)() {
  return &gui_msgs::msg::typesupport_fastrtps_cpp::_SettingTool__handle;
}

#ifdef __cplusplus
}
#endif
