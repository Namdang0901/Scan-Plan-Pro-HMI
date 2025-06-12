// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gui_msgs:msg/SettingTool.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__SETTING_TOOL__BUILDER_HPP_
#define GUI_MSGS__MSG__DETAIL__SETTING_TOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gui_msgs/msg/detail/setting_tool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gui_msgs
{

namespace msg
{

namespace builder
{

class Init_SettingTool_toolgeometry
{
public:
  explicit Init_SettingTool_toolgeometry(::gui_msgs::msg::SettingTool & msg)
  : msg_(msg)
  {}
  ::gui_msgs::msg::SettingTool toolgeometry(::gui_msgs::msg::SettingTool::_toolgeometry_type arg)
  {
    msg_.toolgeometry = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

class Init_SettingTool_tooltype
{
public:
  explicit Init_SettingTool_tooltype(::gui_msgs::msg::SettingTool & msg)
  : msg_(msg)
  {}
  Init_SettingTool_toolgeometry tooltype(::gui_msgs::msg::SettingTool::_tooltype_type arg)
  {
    msg_.tooltype = std::move(arg);
    return Init_SettingTool_toolgeometry(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

class Init_SettingTool_dir
{
public:
  explicit Init_SettingTool_dir(::gui_msgs::msg::SettingTool & msg)
  : msg_(msg)
  {}
  Init_SettingTool_tooltype dir(::gui_msgs::msg::SettingTool::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return Init_SettingTool_tooltype(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

class Init_SettingTool_sanding
{
public:
  explicit Init_SettingTool_sanding(::gui_msgs::msg::SettingTool & msg)
  : msg_(msg)
  {}
  Init_SettingTool_dir sanding(::gui_msgs::msg::SettingTool::_sanding_type arg)
  {
    msg_.sanding = std::move(arg);
    return Init_SettingTool_dir(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

class Init_SettingTool_tool_pressure
{
public:
  explicit Init_SettingTool_tool_pressure(::gui_msgs::msg::SettingTool & msg)
  : msg_(msg)
  {}
  Init_SettingTool_sanding tool_pressure(::gui_msgs::msg::SettingTool::_tool_pressure_type arg)
  {
    msg_.tool_pressure = std::move(arg);
    return Init_SettingTool_sanding(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

class Init_SettingTool_tool_length
{
public:
  explicit Init_SettingTool_tool_length(::gui_msgs::msg::SettingTool & msg)
  : msg_(msg)
  {}
  Init_SettingTool_tool_pressure tool_length(::gui_msgs::msg::SettingTool::_tool_length_type arg)
  {
    msg_.tool_length = std::move(arg);
    return Init_SettingTool_tool_pressure(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

class Init_SettingTool_tool_diameter
{
public:
  explicit Init_SettingTool_tool_diameter(::gui_msgs::msg::SettingTool & msg)
  : msg_(msg)
  {}
  Init_SettingTool_tool_length tool_diameter(::gui_msgs::msg::SettingTool::_tool_diameter_type arg)
  {
    msg_.tool_diameter = std::move(arg);
    return Init_SettingTool_tool_length(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

class Init_SettingTool_feed_rate
{
public:
  explicit Init_SettingTool_feed_rate(::gui_msgs::msg::SettingTool & msg)
  : msg_(msg)
  {}
  Init_SettingTool_tool_diameter feed_rate(::gui_msgs::msg::SettingTool::_feed_rate_type arg)
  {
    msg_.feed_rate = std::move(arg);
    return Init_SettingTool_tool_diameter(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

class Init_SettingTool_tool_rpm
{
public:
  Init_SettingTool_tool_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SettingTool_feed_rate tool_rpm(::gui_msgs::msg::SettingTool::_tool_rpm_type arg)
  {
    msg_.tool_rpm = std::move(arg);
    return Init_SettingTool_feed_rate(msg_);
  }

private:
  ::gui_msgs::msg::SettingTool msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::msg::SettingTool>()
{
  return gui_msgs::msg::builder::Init_SettingTool_tool_rpm();
}

}  // namespace gui_msgs

#endif  // GUI_MSGS__MSG__DETAIL__SETTING_TOOL__BUILDER_HPP_
