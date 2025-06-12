// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gui_msgs:srv/AutoProcess.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__TRAITS_HPP_
#define GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gui_msgs/srv/detail/auto_process__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gui_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AutoProcess_Request & msg,
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
  const AutoProcess_Request & msg,
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

inline std::string to_yaml(const AutoProcess_Request & msg, bool use_flow_style = false)
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
  const gui_msgs::srv::AutoProcess_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gui_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gui_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gui_msgs::srv::AutoProcess_Request & msg)
{
  return gui_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gui_msgs::srv::AutoProcess_Request>()
{
  return "gui_msgs::srv::AutoProcess_Request";
}

template<>
inline const char * name<gui_msgs::srv::AutoProcess_Request>()
{
  return "gui_msgs/srv/AutoProcess_Request";
}

template<>
struct has_fixed_size<gui_msgs::srv::AutoProcess_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gui_msgs::srv::AutoProcess_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gui_msgs::srv::AutoProcess_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gui_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AutoProcess_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutoProcess_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutoProcess_Response & msg, bool use_flow_style = false)
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
  const gui_msgs::srv::AutoProcess_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gui_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gui_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gui_msgs::srv::AutoProcess_Response & msg)
{
  return gui_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gui_msgs::srv::AutoProcess_Response>()
{
  return "gui_msgs::srv::AutoProcess_Response";
}

template<>
inline const char * name<gui_msgs::srv::AutoProcess_Response>()
{
  return "gui_msgs/srv/AutoProcess_Response";
}

template<>
struct has_fixed_size<gui_msgs::srv::AutoProcess_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gui_msgs::srv::AutoProcess_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gui_msgs::srv::AutoProcess_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gui_msgs::srv::AutoProcess>()
{
  return "gui_msgs::srv::AutoProcess";
}

template<>
inline const char * name<gui_msgs::srv::AutoProcess>()
{
  return "gui_msgs/srv/AutoProcess";
}

template<>
struct has_fixed_size<gui_msgs::srv::AutoProcess>
  : std::integral_constant<
    bool,
    has_fixed_size<gui_msgs::srv::AutoProcess_Request>::value &&
    has_fixed_size<gui_msgs::srv::AutoProcess_Response>::value
  >
{
};

template<>
struct has_bounded_size<gui_msgs::srv::AutoProcess>
  : std::integral_constant<
    bool,
    has_bounded_size<gui_msgs::srv::AutoProcess_Request>::value &&
    has_bounded_size<gui_msgs::srv::AutoProcess_Response>::value
  >
{
};

template<>
struct is_service<gui_msgs::srv::AutoProcess>
  : std::true_type
{
};

template<>
struct is_service_request<gui_msgs::srv::AutoProcess_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gui_msgs::srv::AutoProcess_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__TRAITS_HPP_
