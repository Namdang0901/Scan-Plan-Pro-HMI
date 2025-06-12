// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gui_msgs:msg/SettingTool.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__SETTING_TOOL__TRAITS_HPP_
#define GUI_MSGS__MSG__DETAIL__SETTING_TOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gui_msgs/msg/detail/setting_tool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gui_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SettingTool & msg,
  std::ostream & out)
{
  out << "{";
  // member: tool_rpm
  {
    out << "tool_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_rpm, out);
    out << ", ";
  }

  // member: feed_rate
  {
    out << "feed_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.feed_rate, out);
    out << ", ";
  }

  // member: tool_diameter
  {
    out << "tool_diameter: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_diameter, out);
    out << ", ";
  }

  // member: tool_length
  {
    out << "tool_length: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_length, out);
    out << ", ";
  }

  // member: tool_pressure
  {
    out << "tool_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_pressure, out);
    out << ", ";
  }

  // member: sanding
  {
    out << "sanding: ";
    rosidl_generator_traits::value_to_yaml(msg.sanding, out);
    out << ", ";
  }

  // member: dir
  {
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << ", ";
  }

  // member: tooltype
  {
    out << "tooltype: ";
    rosidl_generator_traits::value_to_yaml(msg.tooltype, out);
    out << ", ";
  }

  // member: toolgeometry
  {
    out << "toolgeometry: ";
    rosidl_generator_traits::value_to_yaml(msg.toolgeometry, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SettingTool & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tool_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_rpm, out);
    out << "\n";
  }

  // member: feed_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feed_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.feed_rate, out);
    out << "\n";
  }

  // member: tool_diameter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_diameter: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_diameter, out);
    out << "\n";
  }

  // member: tool_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_length: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_length, out);
    out << "\n";
  }

  // member: tool_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_pressure, out);
    out << "\n";
  }

  // member: sanding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sanding: ";
    rosidl_generator_traits::value_to_yaml(msg.sanding, out);
    out << "\n";
  }

  // member: dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << "\n";
  }

  // member: tooltype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tooltype: ";
    rosidl_generator_traits::value_to_yaml(msg.tooltype, out);
    out << "\n";
  }

  // member: toolgeometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toolgeometry: ";
    rosidl_generator_traits::value_to_yaml(msg.toolgeometry, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SettingTool & msg, bool use_flow_style = false)
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

}  // namespace gui_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gui_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gui_msgs::msg::SettingTool & msg,
  std::ostream & out, size_t indentation = 0)
{
  gui_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gui_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gui_msgs::msg::SettingTool & msg)
{
  return gui_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gui_msgs::msg::SettingTool>()
{
  return "gui_msgs::msg::SettingTool";
}

template<>
inline const char * name<gui_msgs::msg::SettingTool>()
{
  return "gui_msgs/msg/SettingTool";
}

template<>
struct has_fixed_size<gui_msgs::msg::SettingTool>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gui_msgs::msg::SettingTool>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gui_msgs::msg::SettingTool>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GUI_MSGS__MSG__DETAIL__SETTING_TOOL__TRAITS_HPP_
