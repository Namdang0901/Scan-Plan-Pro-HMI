// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__TRAITS_HPP_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rviz_cloud_annotation
{

namespace msg
{

inline void to_flow_style_yaml(
  const RectangleSelectionViewport & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_x
  {
    out << "start_x: ";
    rosidl_generator_traits::value_to_yaml(msg.start_x, out);
    out << ", ";
  }

  // member: start_y
  {
    out << "start_y: ";
    rosidl_generator_traits::value_to_yaml(msg.start_y, out);
    out << ", ";
  }

  // member: end_x
  {
    out << "end_x: ";
    rosidl_generator_traits::value_to_yaml(msg.end_x, out);
    out << ", ";
  }

  // member: end_y
  {
    out << "end_y: ";
    rosidl_generator_traits::value_to_yaml(msg.end_y, out);
    out << ", ";
  }

  // member: viewport_height
  {
    out << "viewport_height: ";
    rosidl_generator_traits::value_to_yaml(msg.viewport_height, out);
    out << ", ";
  }

  // member: viewport_width
  {
    out << "viewport_width: ";
    rosidl_generator_traits::value_to_yaml(msg.viewport_width, out);
    out << ", ";
  }

  // member: focal_length
  {
    out << "focal_length: ";
    rosidl_generator_traits::value_to_yaml(msg.focal_length, out);
    out << ", ";
  }

  // member: projection_matrix
  {
    if (msg.projection_matrix.size() == 0) {
      out << "projection_matrix: []";
    } else {
      out << "projection_matrix: [";
      size_t pending_items = msg.projection_matrix.size();
      for (auto item : msg.projection_matrix) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: camera_pose
  {
    out << "camera_pose: ";
    to_flow_style_yaml(msg.camera_pose, out);
    out << ", ";
  }

  // member: is_deep_selection
  {
    out << "is_deep_selection: ";
    rosidl_generator_traits::value_to_yaml(msg.is_deep_selection, out);
    out << ", ";
  }

  // member: polyline_x
  {
    if (msg.polyline_x.size() == 0) {
      out << "polyline_x: []";
    } else {
      out << "polyline_x: [";
      size_t pending_items = msg.polyline_x.size();
      for (auto item : msg.polyline_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: polyline_y
  {
    if (msg.polyline_y.size() == 0) {
      out << "polyline_y: []";
    } else {
      out << "polyline_y: [";
      size_t pending_items = msg.polyline_y.size();
      for (auto item : msg.polyline_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const RectangleSelectionViewport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_x: ";
    rosidl_generator_traits::value_to_yaml(msg.start_x, out);
    out << "\n";
  }

  // member: start_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_y: ";
    rosidl_generator_traits::value_to_yaml(msg.start_y, out);
    out << "\n";
  }

  // member: end_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_x: ";
    rosidl_generator_traits::value_to_yaml(msg.end_x, out);
    out << "\n";
  }

  // member: end_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_y: ";
    rosidl_generator_traits::value_to_yaml(msg.end_y, out);
    out << "\n";
  }

  // member: viewport_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "viewport_height: ";
    rosidl_generator_traits::value_to_yaml(msg.viewport_height, out);
    out << "\n";
  }

  // member: viewport_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "viewport_width: ";
    rosidl_generator_traits::value_to_yaml(msg.viewport_width, out);
    out << "\n";
  }

  // member: focal_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focal_length: ";
    rosidl_generator_traits::value_to_yaml(msg.focal_length, out);
    out << "\n";
  }

  // member: projection_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.projection_matrix.size() == 0) {
      out << "projection_matrix: []\n";
    } else {
      out << "projection_matrix:\n";
      for (auto item : msg.projection_matrix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: camera_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_pose:\n";
    to_block_style_yaml(msg.camera_pose, out, indentation + 2);
  }

  // member: is_deep_selection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_deep_selection: ";
    rosidl_generator_traits::value_to_yaml(msg.is_deep_selection, out);
    out << "\n";
  }

  // member: polyline_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polyline_x.size() == 0) {
      out << "polyline_x: []\n";
    } else {
      out << "polyline_x:\n";
      for (auto item : msg.polyline_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: polyline_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polyline_y.size() == 0) {
      out << "polyline_y: []\n";
    } else {
      out << "polyline_y:\n";
      for (auto item : msg.polyline_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RectangleSelectionViewport & msg, bool use_flow_style = false)
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
  const rviz_cloud_annotation::msg::RectangleSelectionViewport & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_cloud_annotation::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_cloud_annotation::msg::to_yaml() instead")]]
inline std::string to_yaml(const rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
{
  return rviz_cloud_annotation::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_cloud_annotation::msg::RectangleSelectionViewport>()
{
  return "rviz_cloud_annotation::msg::RectangleSelectionViewport";
}

template<>
inline const char * name<rviz_cloud_annotation::msg::RectangleSelectionViewport>()
{
  return "rviz_cloud_annotation/msg/RectangleSelectionViewport";
}

template<>
struct has_fixed_size<rviz_cloud_annotation::msg::RectangleSelectionViewport>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rviz_cloud_annotation::msg::RectangleSelectionViewport>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rviz_cloud_annotation::msg::RectangleSelectionViewport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__TRAITS_HPP_
