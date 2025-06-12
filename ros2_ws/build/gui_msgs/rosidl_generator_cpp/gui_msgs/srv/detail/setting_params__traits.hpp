// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gui_msgs:srv/SettingParams.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__TRAITS_HPP_
#define GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gui_msgs/srv/detail/setting_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gui_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SettingParams_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: req
  {
    out << "req: ";
    rosidl_generator_traits::value_to_yaml(msg.req, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SettingParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req: ";
    rosidl_generator_traits::value_to_yaml(msg.req, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SettingParams_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gui_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gui_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gui_msgs::srv::SettingParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gui_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gui_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gui_msgs::srv::SettingParams_Request & msg)
{
  return gui_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gui_msgs::srv::SettingParams_Request>()
{
  return "gui_msgs::srv::SettingParams_Request";
}

template<>
inline const char * name<gui_msgs::srv::SettingParams_Request>()
{
  return "gui_msgs/srv/SettingParams_Request";
}

template<>
struct has_fixed_size<gui_msgs::srv::SettingParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gui_msgs::srv::SettingParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gui_msgs::srv::SettingParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gui_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SettingParams_Response & msg,
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
  const SettingParams_Response & msg,
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

inline std::string to_yaml(const SettingParams_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gui_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gui_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gui_msgs::srv::SettingParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gui_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gui_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gui_msgs::srv::SettingParams_Response & msg)
{
  return gui_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gui_msgs::srv::SettingParams_Response>()
{
  return "gui_msgs::srv::SettingParams_Response";
}

template<>
inline const char * name<gui_msgs::srv::SettingParams_Response>()
{
  return "gui_msgs/srv/SettingParams_Response";
}

template<>
struct has_fixed_size<gui_msgs::srv::SettingParams_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gui_msgs::srv::SettingParams_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gui_msgs::srv::SettingParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gui_msgs::srv::SettingParams>()
{
  return "gui_msgs::srv::SettingParams";
}

template<>
inline const char * name<gui_msgs::srv::SettingParams>()
{
  return "gui_msgs/srv/SettingParams";
}

template<>
struct has_fixed_size<gui_msgs::srv::SettingParams>
  : std::integral_constant<
    bool,
    has_fixed_size<gui_msgs::srv::SettingParams_Request>::value &&
    has_fixed_size<gui_msgs::srv::SettingParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<gui_msgs::srv::SettingParams>
  : std::integral_constant<
    bool,
    has_bounded_size<gui_msgs::srv::SettingParams_Request>::value &&
    has_bounded_size<gui_msgs::srv::SettingParams_Response>::value
  >
{
};

template<>
struct is_service<gui_msgs::srv::SettingParams>
  : std::true_type
{
};

template<>
struct is_service_request<gui_msgs::srv::SettingParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gui_msgs::srv::SettingParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__TRAITS_HPP_
