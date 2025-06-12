// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:srv/CameraInfoModelName.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__TRAITS_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/srv/detail/camera_info_model_name__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraInfoModelName_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraInfoModelName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraInfoModelName_Request & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::CameraInfoModelName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::CameraInfoModelName_Request & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::CameraInfoModelName_Request>()
{
  return "zivid_interfaces::srv::CameraInfoModelName_Request";
}

template<>
inline const char * name<zivid_interfaces::srv::CameraInfoModelName_Request>()
{
  return "zivid_interfaces/srv/CameraInfoModelName_Request";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CameraInfoModelName_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::CameraInfoModelName_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<zivid_interfaces::srv::CameraInfoModelName_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraInfoModelName_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraInfoModelName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraInfoModelName_Response & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::CameraInfoModelName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::CameraInfoModelName_Response & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::CameraInfoModelName_Response>()
{
  return "zivid_interfaces::srv::CameraInfoModelName_Response";
}

template<>
inline const char * name<zivid_interfaces::srv::CameraInfoModelName_Response>()
{
  return "zivid_interfaces/srv/CameraInfoModelName_Response";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CameraInfoModelName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::CameraInfoModelName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::CameraInfoModelName_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zivid_interfaces::srv::CameraInfoModelName>()
{
  return "zivid_interfaces::srv::CameraInfoModelName";
}

template<>
inline const char * name<zivid_interfaces::srv::CameraInfoModelName>()
{
  return "zivid_interfaces/srv/CameraInfoModelName";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CameraInfoModelName>
  : std::integral_constant<
    bool,
    has_fixed_size<zivid_interfaces::srv::CameraInfoModelName_Request>::value &&
    has_fixed_size<zivid_interfaces::srv::CameraInfoModelName_Response>::value
  >
{
};

template<>
struct has_bounded_size<zivid_interfaces::srv::CameraInfoModelName>
  : std::integral_constant<
    bool,
    has_bounded_size<zivid_interfaces::srv::CameraInfoModelName_Request>::value &&
    has_bounded_size<zivid_interfaces::srv::CameraInfoModelName_Response>::value
  >
{
};

template<>
struct is_service<zivid_interfaces::srv::CameraInfoModelName>
  : std::true_type
{
};

template<>
struct is_service_request<zivid_interfaces::srv::CameraInfoModelName_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zivid_interfaces::srv::CameraInfoModelName_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__TRAITS_HPP_
