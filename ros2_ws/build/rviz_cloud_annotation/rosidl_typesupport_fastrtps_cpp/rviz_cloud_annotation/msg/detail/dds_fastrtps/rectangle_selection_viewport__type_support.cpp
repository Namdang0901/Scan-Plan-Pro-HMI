// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace rviz_cloud_annotation
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
cdr_serialize(
  const rviz_cloud_annotation::msg::RectangleSelectionViewport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: start_x
  cdr << ros_message.start_x;
  // Member: start_y
  cdr << ros_message.start_y;
  // Member: end_x
  cdr << ros_message.end_x;
  // Member: end_y
  cdr << ros_message.end_y;
  // Member: viewport_height
  cdr << ros_message.viewport_height;
  // Member: viewport_width
  cdr << ros_message.viewport_width;
  // Member: focal_length
  cdr << ros_message.focal_length;
  // Member: projection_matrix
  {
    cdr << ros_message.projection_matrix;
  }
  // Member: camera_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.camera_pose,
    cdr);
  // Member: is_deep_selection
  cdr << (ros_message.is_deep_selection ? true : false);
  // Member: polyline_x
  {
    cdr << ros_message.polyline_x;
  }
  // Member: polyline_y
  {
    cdr << ros_message.polyline_y;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rviz_cloud_annotation::msg::RectangleSelectionViewport & ros_message)
{
  // Member: start_x
  cdr >> ros_message.start_x;

  // Member: start_y
  cdr >> ros_message.start_y;

  // Member: end_x
  cdr >> ros_message.end_x;

  // Member: end_y
  cdr >> ros_message.end_y;

  // Member: viewport_height
  cdr >> ros_message.viewport_height;

  // Member: viewport_width
  cdr >> ros_message.viewport_width;

  // Member: focal_length
  cdr >> ros_message.focal_length;

  // Member: projection_matrix
  {
    cdr >> ros_message.projection_matrix;
  }

  // Member: camera_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.camera_pose);

  // Member: is_deep_selection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_deep_selection = tmp ? true : false;
  }

  // Member: polyline_x
  {
    cdr >> ros_message.polyline_x;
  }

  // Member: polyline_y
  {
    cdr >> ros_message.polyline_y;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
get_serialized_size(
  const rviz_cloud_annotation::msg::RectangleSelectionViewport & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: start_x
  {
    size_t item_size = sizeof(ros_message.start_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_y
  {
    size_t item_size = sizeof(ros_message.start_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_x
  {
    size_t item_size = sizeof(ros_message.end_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_y
  {
    size_t item_size = sizeof(ros_message.end_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: viewport_height
  {
    size_t item_size = sizeof(ros_message.viewport_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: viewport_width
  {
    size_t item_size = sizeof(ros_message.viewport_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: focal_length
  {
    size_t item_size = sizeof(ros_message.focal_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: projection_matrix
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.projection_matrix[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.camera_pose, current_alignment);
  // Member: is_deep_selection
  {
    size_t item_size = sizeof(ros_message.is_deep_selection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: polyline_x
  {
    size_t array_size = ros_message.polyline_x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.polyline_x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: polyline_y
  {
    size_t array_size = ros_message.polyline_y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.polyline_y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
max_serialized_size_RectangleSelectionViewport(
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


  // Member: start_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: start_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: end_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: end_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: viewport_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: viewport_width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: focal_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: projection_matrix
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: camera_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_deep_selection
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: polyline_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: polyline_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rviz_cloud_annotation::msg::RectangleSelectionViewport;
    is_plain =
      (
      offsetof(DataType, polyline_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RectangleSelectionViewport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rviz_cloud_annotation::msg::RectangleSelectionViewport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RectangleSelectionViewport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rviz_cloud_annotation::msg::RectangleSelectionViewport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RectangleSelectionViewport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rviz_cloud_annotation::msg::RectangleSelectionViewport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RectangleSelectionViewport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RectangleSelectionViewport(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RectangleSelectionViewport__callbacks = {
  "rviz_cloud_annotation::msg",
  "RectangleSelectionViewport",
  _RectangleSelectionViewport__cdr_serialize,
  _RectangleSelectionViewport__cdr_deserialize,
  _RectangleSelectionViewport__get_serialized_size,
  _RectangleSelectionViewport__max_serialized_size
};

static rosidl_message_type_support_t _RectangleSelectionViewport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RectangleSelectionViewport__callbacks,
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
get_message_type_support_handle<rviz_cloud_annotation::msg::RectangleSelectionViewport>()
{
  return &rviz_cloud_annotation::msg::typesupport_fastrtps_cpp::_RectangleSelectionViewport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rviz_cloud_annotation, msg, RectangleSelectionViewport)() {
  return &rviz_cloud_annotation::msg::typesupport_fastrtps_cpp::_RectangleSelectionViewport__handle;
}

#ifdef __cplusplus
}
#endif
