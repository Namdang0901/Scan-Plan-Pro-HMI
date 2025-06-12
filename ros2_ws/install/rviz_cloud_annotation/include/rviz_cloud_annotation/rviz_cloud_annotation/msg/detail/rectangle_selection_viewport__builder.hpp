// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__BUILDER_HPP_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rviz_cloud_annotation
{

namespace msg
{

namespace builder
{

class Init_RectangleSelectionViewport_polyline_y
{
public:
  explicit Init_RectangleSelectionViewport_polyline_y(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport polyline_y(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_polyline_y_type arg)
  {
    msg_.polyline_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_polyline_x
{
public:
  explicit Init_RectangleSelectionViewport_polyline_x(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_polyline_y polyline_x(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_polyline_x_type arg)
  {
    msg_.polyline_x = std::move(arg);
    return Init_RectangleSelectionViewport_polyline_y(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_is_deep_selection
{
public:
  explicit Init_RectangleSelectionViewport_is_deep_selection(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_polyline_x is_deep_selection(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_is_deep_selection_type arg)
  {
    msg_.is_deep_selection = std::move(arg);
    return Init_RectangleSelectionViewport_polyline_x(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_camera_pose
{
public:
  explicit Init_RectangleSelectionViewport_camera_pose(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_is_deep_selection camera_pose(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_camera_pose_type arg)
  {
    msg_.camera_pose = std::move(arg);
    return Init_RectangleSelectionViewport_is_deep_selection(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_projection_matrix
{
public:
  explicit Init_RectangleSelectionViewport_projection_matrix(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_camera_pose projection_matrix(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_projection_matrix_type arg)
  {
    msg_.projection_matrix = std::move(arg);
    return Init_RectangleSelectionViewport_camera_pose(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_focal_length
{
public:
  explicit Init_RectangleSelectionViewport_focal_length(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_projection_matrix focal_length(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_focal_length_type arg)
  {
    msg_.focal_length = std::move(arg);
    return Init_RectangleSelectionViewport_projection_matrix(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_viewport_width
{
public:
  explicit Init_RectangleSelectionViewport_viewport_width(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_focal_length viewport_width(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_viewport_width_type arg)
  {
    msg_.viewport_width = std::move(arg);
    return Init_RectangleSelectionViewport_focal_length(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_viewport_height
{
public:
  explicit Init_RectangleSelectionViewport_viewport_height(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_viewport_width viewport_height(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_viewport_height_type arg)
  {
    msg_.viewport_height = std::move(arg);
    return Init_RectangleSelectionViewport_viewport_width(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_end_y
{
public:
  explicit Init_RectangleSelectionViewport_end_y(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_viewport_height end_y(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_end_y_type arg)
  {
    msg_.end_y = std::move(arg);
    return Init_RectangleSelectionViewport_viewport_height(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_end_x
{
public:
  explicit Init_RectangleSelectionViewport_end_x(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_end_y end_x(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_end_x_type arg)
  {
    msg_.end_x = std::move(arg);
    return Init_RectangleSelectionViewport_end_y(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_start_y
{
public:
  explicit Init_RectangleSelectionViewport_start_y(::rviz_cloud_annotation::msg::RectangleSelectionViewport & msg)
  : msg_(msg)
  {}
  Init_RectangleSelectionViewport_end_x start_y(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_start_y_type arg)
  {
    msg_.start_y = std::move(arg);
    return Init_RectangleSelectionViewport_end_x(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

class Init_RectangleSelectionViewport_start_x
{
public:
  Init_RectangleSelectionViewport_start_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RectangleSelectionViewport_start_y start_x(::rviz_cloud_annotation::msg::RectangleSelectionViewport::_start_x_type arg)
  {
    msg_.start_x = std::move(arg);
    return Init_RectangleSelectionViewport_start_y(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::RectangleSelectionViewport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_cloud_annotation::msg::RectangleSelectionViewport>()
{
  return rviz_cloud_annotation::msg::builder::Init_RectangleSelectionViewport_start_x();
}

}  // namespace rviz_cloud_annotation

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__BUILDER_HPP_
