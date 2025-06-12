// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationLoad.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__TRAITS_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/srv/detail/hand_eye_calibration_load__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'calibration_objects'
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HandEyeCalibrationLoad_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: working_directory
  {
    out << "working_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.working_directory, out);
    out << ", ";
  }

  // member: calibration_objects
  {
    out << "calibration_objects: ";
    to_flow_style_yaml(msg.calibration_objects, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandEyeCalibrationLoad_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: working_directory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "working_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.working_directory, out);
    out << "\n";
  }

  // member: calibration_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_objects:\n";
    to_block_style_yaml(msg.calibration_objects, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandEyeCalibrationLoad_Request & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::HandEyeCalibrationLoad_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::HandEyeCalibrationLoad_Request & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationLoad_Request";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationLoad_Request";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HandEyeCalibrationLoad_Response & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandEyeCalibrationLoad_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandEyeCalibrationLoad_Response & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::HandEyeCalibrationLoad_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::HandEyeCalibrationLoad_Response & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationLoad_Response";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationLoad_Response";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationLoad>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationLoad";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationLoad>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationLoad";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationLoad>
  : std::integral_constant<
    bool,
    has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>::value &&
    has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>::value
  >
{
};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationLoad>
  : std::integral_constant<
    bool,
    has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>::value &&
    has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>::value
  >
{
};

template<>
struct is_service<zivid_interfaces::srv::HandEyeCalibrationLoad>
  : std::true_type
{
};

template<>
struct is_service_request<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__TRAITS_HPP_
