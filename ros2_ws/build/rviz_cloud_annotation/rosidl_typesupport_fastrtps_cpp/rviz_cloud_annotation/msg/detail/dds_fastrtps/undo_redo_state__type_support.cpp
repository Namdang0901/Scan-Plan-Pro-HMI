// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rviz_cloud_annotation:msg/UndoRedoState.idl
// generated code does not contain a copyright notice
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rviz_cloud_annotation/msg/detail/undo_redo_state__struct.hpp"

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

namespace rviz_cloud_annotation
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
cdr_serialize(
  const rviz_cloud_annotation::msg::UndoRedoState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: redo_enabled
  cdr << (ros_message.redo_enabled ? true : false);
  // Member: redo_description
  cdr << ros_message.redo_description;
  // Member: undo_enabled
  cdr << (ros_message.undo_enabled ? true : false);
  // Member: undo_description
  cdr << ros_message.undo_description;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rviz_cloud_annotation::msg::UndoRedoState & ros_message)
{
  // Member: redo_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.redo_enabled = tmp ? true : false;
  }

  // Member: redo_description
  cdr >> ros_message.redo_description;

  // Member: undo_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.undo_enabled = tmp ? true : false;
  }

  // Member: undo_description
  cdr >> ros_message.undo_description;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
get_serialized_size(
  const rviz_cloud_annotation::msg::UndoRedoState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: redo_enabled
  {
    size_t item_size = sizeof(ros_message.redo_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: redo_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.redo_description.size() + 1);
  // Member: undo_enabled
  {
    size_t item_size = sizeof(ros_message.undo_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: undo_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.undo_description.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
max_serialized_size_UndoRedoState(
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


  // Member: redo_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: redo_description
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

  // Member: undo_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: undo_description
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
    using DataType = rviz_cloud_annotation::msg::UndoRedoState;
    is_plain =
      (
      offsetof(DataType, undo_description) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _UndoRedoState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rviz_cloud_annotation::msg::UndoRedoState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UndoRedoState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rviz_cloud_annotation::msg::UndoRedoState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UndoRedoState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rviz_cloud_annotation::msg::UndoRedoState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UndoRedoState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UndoRedoState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UndoRedoState__callbacks = {
  "rviz_cloud_annotation::msg",
  "UndoRedoState",
  _UndoRedoState__cdr_serialize,
  _UndoRedoState__cdr_deserialize,
  _UndoRedoState__get_serialized_size,
  _UndoRedoState__max_serialized_size
};

static rosidl_message_type_support_t _UndoRedoState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UndoRedoState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rviz_cloud_annotation

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rviz_cloud_annotation
const rosidl_message_type_support_t *
get_message_type_support_handle<rviz_cloud_annotation::msg::UndoRedoState>()
{
  return &rviz_cloud_annotation::msg::typesupport_fastrtps_cpp::_UndoRedoState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rviz_cloud_annotation, msg, UndoRedoState)() {
  return &rviz_cloud_annotation::msg::typesupport_fastrtps_cpp::_UndoRedoState__handle;
}

#ifdef __cplusplus
}
#endif
