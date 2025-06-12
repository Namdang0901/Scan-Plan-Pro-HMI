// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gui_msgs:msg/SettingParams.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__TRAITS_HPP_
#define GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gui_msgs/msg/detail/setting_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gui_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SettingParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear
  {
    out << "linear: ";
    rosidl_generator_traits::value_to_yaml(msg.linear, out);
    out << ", ";
  }

  // member: rotation
  {
    out << "rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation, out);
    out << ", ";
  }

  // member: grinding_speed
  {
    out << "grinding_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.grinding_speed, out);
    out << ", ";
  }

  // member: grinding_force
  {
    out << "grinding_force: ";
    rosidl_generator_traits::value_to_yaml(msg.grinding_force, out);
    out << ", ";
  }

  // member: spindle_speed
  {
    out << "spindle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.spindle_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SettingParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear: ";
    rosidl_generator_traits::value_to_yaml(msg.linear, out);
    out << "\n";
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation, out);
    out << "\n";
  }

  // member: grinding_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grinding_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.grinding_speed, out);
    out << "\n";
  }

  // member: grinding_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grinding_force: ";
    rosidl_generator_traits::value_to_yaml(msg.grinding_force, out);
    out << "\n";
  }

  // member: spindle_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spindle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.spindle_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SettingParams & msg, bool use_flow_style = false)
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
  const gui_msgs::msg::SettingParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  gui_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gui_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gui_msgs::msg::SettingParams & msg)
{
  return gui_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gui_msgs::msg::SettingParams>()
{
  return "gui_msgs::msg::SettingParams";
}

template<>
inline const char * name<gui_msgs::msg::SettingParams>()
{
  return "gui_msgs/msg/SettingParams";
}

template<>
struct has_fixed_size<gui_msgs::msg::SettingParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gui_msgs::msg::SettingParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gui_msgs::msg::SettingParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__TRAITS_HPP_
