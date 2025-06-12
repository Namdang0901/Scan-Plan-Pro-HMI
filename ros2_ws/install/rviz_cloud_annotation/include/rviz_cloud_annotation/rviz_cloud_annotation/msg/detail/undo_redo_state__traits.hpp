// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_cloud_annotation:msg/UndoRedoState.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__TRAITS_HPP_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rviz_cloud_annotation/msg/detail/undo_redo_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rviz_cloud_annotation
{

namespace msg
{

inline void to_flow_style_yaml(
  const UndoRedoState & msg,
  std::ostream & out)
{
  out << "{";
  // member: redo_enabled
  {
    out << "redo_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.redo_enabled, out);
    out << ", ";
  }

  // member: redo_description
  {
    out << "redo_description: ";
    rosidl_generator_traits::value_to_yaml(msg.redo_description, out);
    out << ", ";
  }

  // member: undo_enabled
  {
    out << "undo_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.undo_enabled, out);
    out << ", ";
  }

  // member: undo_description
  {
    out << "undo_description: ";
    rosidl_generator_traits::value_to_yaml(msg.undo_description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UndoRedoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: redo_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "redo_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.redo_enabled, out);
    out << "\n";
  }

  // member: redo_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "redo_description: ";
    rosidl_generator_traits::value_to_yaml(msg.redo_description, out);
    out << "\n";
  }

  // member: undo_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undo_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.undo_enabled, out);
    out << "\n";
  }

  // member: undo_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undo_description: ";
    rosidl_generator_traits::value_to_yaml(msg.undo_description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UndoRedoState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rviz_cloud_annotation

namespace rosidl_generator_traits
{

[[deprecated("use rviz_cloud_annotation::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rviz_cloud_annotation::msg::UndoRedoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_cloud_annotation::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_cloud_annotation::msg::to_yaml() instead")]]
inline std::string to_yaml(const rviz_cloud_annotation::msg::UndoRedoState & msg)
{
  return rviz_cloud_annotation::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_cloud_annotation::msg::UndoRedoState>()
{
  return "rviz_cloud_annotation::msg::UndoRedoState";
}

template<>
inline const char * name<rviz_cloud_annotation::msg::UndoRedoState>()
{
  return "rviz_cloud_annotation/msg/UndoRedoState";
}

template<>
struct has_fixed_size<rviz_cloud_annotation::msg::UndoRedoState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rviz_cloud_annotation::msg::UndoRedoState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rviz_cloud_annotation::msg::UndoRedoState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__TRAITS_HPP_
