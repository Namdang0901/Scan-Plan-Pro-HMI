// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:srv/InfieldCorrectionRead.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__TRAITS_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/srv/detail/infield_correction_read__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InfieldCorrectionRead_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InfieldCorrectionRead_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InfieldCorrectionRead_Request & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::InfieldCorrectionRead_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::InfieldCorrectionRead_Request & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::InfieldCorrectionRead_Request>()
{
  return "zivid_interfaces::srv::InfieldCorrectionRead_Request";
}

template<>
inline const char * name<zivid_interfaces::srv::InfieldCorrectionRead_Request>()
{
  return "zivid_interfaces/srv/InfieldCorrectionRead_Request";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::InfieldCorrectionRead_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::InfieldCorrectionRead_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<zivid_interfaces::srv::InfieldCorrectionRead_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'camera_correction_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InfieldCorrectionRead_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: has_camera_correction
  {
    out << "has_camera_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.has_camera_correction, out);
    out << ", ";
  }

  // member: camera_correction_timestamp
  {
    out << "camera_correction_timestamp: ";
    to_flow_style_yaml(msg.camera_correction_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InfieldCorrectionRead_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: has_camera_correction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_camera_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.has_camera_correction, out);
    out << "\n";
  }

  // member: camera_correction_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_correction_timestamp:\n";
    to_block_style_yaml(msg.camera_correction_timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InfieldCorrectionRead_Response & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::InfieldCorrectionRead_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::InfieldCorrectionRead_Response & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::InfieldCorrectionRead_Response>()
{
  return "zivid_interfaces::srv::InfieldCorrectionRead_Response";
}

template<>
inline const char * name<zivid_interfaces::srv::InfieldCorrectionRead_Response>()
{
  return "zivid_interfaces/srv/InfieldCorrectionRead_Response";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::InfieldCorrectionRead_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::InfieldCorrectionRead_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::InfieldCorrectionRead_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zivid_interfaces::srv::InfieldCorrectionRead>()
{
  return "zivid_interfaces::srv::InfieldCorrectionRead";
}

template<>
inline const char * name<zivid_interfaces::srv::InfieldCorrectionRead>()
{
  return "zivid_interfaces/srv/InfieldCorrectionRead";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::InfieldCorrectionRead>
  : std::integral_constant<
    bool,
    has_fixed_size<zivid_interfaces::srv::InfieldCorrectionRead_Request>::value &&
    has_fixed_size<zivid_interfaces::srv::InfieldCorrectionRead_Response>::value
  >
{
};

template<>
struct has_bounded_size<zivid_interfaces::srv::InfieldCorrectionRead>
  : std::integral_constant<
    bool,
    has_bounded_size<zivid_interfaces::srv::InfieldCorrectionRead_Request>::value &&
    has_bounded_size<zivid_interfaces::srv::InfieldCorrectionRead_Response>::value
  >
{
};

template<>
struct is_service<zivid_interfaces::srv::InfieldCorrectionRead>
  : std::true_type
{
};

template<>
struct is_service_request<zivid_interfaces::srv::InfieldCorrectionRead_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zivid_interfaces::srv::InfieldCorrectionRead_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__TRAITS_HPP_
