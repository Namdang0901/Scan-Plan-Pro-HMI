// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rviz_cloud_annotation/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rviz_cloud_annotation::msg::RectangleSelectionViewport & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
get_serialized_size(
  const rviz_cloud_annotation::msg::RectangleSelectionViewport & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
max_serialized_size_RectangleSelectionViewport(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rviz_cloud_annotation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_cloud_annotation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rviz_cloud_annotation, msg, RectangleSelectionViewport)();

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
