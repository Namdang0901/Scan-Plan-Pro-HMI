// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__TRAITS_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'calibration_board'
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__traits.hpp"
// Member 'markers'
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__traits.hpp"

namespace zivid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FixedPlacementOfCalibrationObjects & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: calibration_board
  {
    out << "calibration_board: ";
    to_flow_style_yaml(msg.calibration_board, out);
    out << ", ";
  }

  // member: marker_dictionary
  {
    out << "marker_dictionary: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_dictionary, out);
    out << ", ";
  }

  // member: markers
  {
    if (msg.markers.size() == 0) {
      out << "markers: []";
    } else {
      out << "markers: [";
      size_t pending_items = msg.markers.size();
      for (auto item : msg.markers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FixedPlacementOfCalibrationObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: calibration_board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_board:\n";
    to_block_style_yaml(msg.calibration_board, out, indentation + 2);
  }

  // member: marker_dictionary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_dictionary: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_dictionary, out);
    out << "\n";
  }

  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FixedPlacementOfCalibrationObjects & msg, bool use_flow_style = false)
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

}  // namespace zivid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zivid_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & msg)
{
  return zivid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects>()
{
  return "zivid_interfaces::msg::FixedPlacementOfCalibrationObjects";
}

template<>
inline const char * name<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects>()
{
  return "zivid_interfaces/msg/FixedPlacementOfCalibrationObjects";
}

template<>
struct has_fixed_size<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__TRAITS_HPP_
