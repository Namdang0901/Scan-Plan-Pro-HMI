// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__TRAITS_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/srv/detail/is_connected__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsConnected_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsConnected_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsConnected_Request & msg, bool use_flow_style = false)
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

}  // namespace zivid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zivid_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zivid_interfaces::srv::IsConnected_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::IsConnected_Request & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::IsConnected_Request>()
{
  return "zivid_interfaces::srv::IsConnected_Request";
}

template<>
inline const char * name<zivid_interfaces::srv::IsConnected_Request>()
{
  return "zivid_interfaces/srv/IsConnected_Request";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::IsConnected_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::IsConnected_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<zivid_interfaces::srv::IsConnected_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsConnected_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_connected
  {
    out << "is_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.is_connected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsConnected_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.is_connected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsConnected_Response & msg, bool use_flow_style = false)
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

}  // namespace zivid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zivid_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zivid_interfaces::srv::IsConnected_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::IsConnected_Response & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::IsConnected_Response>()
{
  return "zivid_interfaces::srv::IsConnected_Response";
}

template<>
inline const char * name<zivid_interfaces::srv::IsConnected_Response>()
{
  return "zivid_interfaces/srv/IsConnected_Response";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::IsConnected_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::IsConnected_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<zivid_interfaces::srv::IsConnected_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zivid_interfaces::srv::IsConnected>()
{
  return "zivid_interfaces::srv::IsConnected";
}

template<>
inline const char * name<zivid_interfaces::srv::IsConnected>()
{
  return "zivid_interfaces/srv/IsConnected";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::IsConnected>
  : std::integral_constant<
    bool,
    has_fixed_size<zivid_interfaces::srv::IsConnected_Request>::value &&
    has_fixed_size<zivid_interfaces::srv::IsConnected_Response>::value
  >
{
};

template<>
struct has_bounded_size<zivid_interfaces::srv::IsConnected>
  : std::integral_constant<
    bool,
    has_bounded_size<zivid_interfaces::srv::IsConnected_Request>::value &&
    has_bounded_size<zivid_interfaces::srv::IsConnected_Response>::value
  >
{
};

template<>
struct is_service<zivid_interfaces::srv::IsConnected>
  : std::true_type
{
};

template<>
struct is_service_request<zivid_interfaces::srv::IsConnected_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zivid_interfaces::srv::IsConnected_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__TRAITS_HPP_
