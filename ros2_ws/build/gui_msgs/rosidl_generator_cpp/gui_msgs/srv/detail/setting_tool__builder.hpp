// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gui_msgs:srv/SettingTool.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__SETTING_TOOL__BUILDER_HPP_
#define GUI_MSGS__SRV__DETAIL__SETTING_TOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gui_msgs/srv/detail/setting_tool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gui_msgs
{

namespace srv
{

namespace builder
{

class Init_SettingTool_Request_req
{
public:
  Init_SettingTool_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gui_msgs::srv::SettingTool_Request req(::gui_msgs::srv::SettingTool_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::srv::SettingTool_Request>()
{
  return gui_msgs::srv::builder::Init_SettingTool_Request_req();
}

}  // namespace gui_msgs


namespace gui_msgs
{

namespace srv
{

namespace builder
{

class Init_SettingTool_Response_toolgeometry
{
public:
  explicit Init_SettingTool_Response_toolgeometry(::gui_msgs::srv::SettingTool_Response & msg)
  : msg_(msg)
  {}
  ::gui_msgs::srv::SettingTool_Response toolgeometry(::gui_msgs::srv::SettingTool_Response::_toolgeometry_type arg)
  {
    msg_.toolgeometry = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

class Init_SettingTool_Response_tooltype
{
public:
  explicit Init_SettingTool_Response_tooltype(::gui_msgs::srv::SettingTool_Response & msg)
  : msg_(msg)
  {}
  Init_SettingTool_Response_toolgeometry tooltype(::gui_msgs::srv::SettingTool_Response::_tooltype_type arg)
  {
    msg_.tooltype = std::move(arg);
    return Init_SettingTool_Response_toolgeometry(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

class Init_SettingTool_Response_dir
{
public:
  explicit Init_SettingTool_Response_dir(::gui_msgs::srv::SettingTool_Response & msg)
  : msg_(msg)
  {}
  Init_SettingTool_Response_tooltype dir(::gui_msgs::srv::SettingTool_Response::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return Init_SettingTool_Response_tooltype(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

class Init_SettingTool_Response_sanding
{
public:
  explicit Init_SettingTool_Response_sanding(::gui_msgs::srv::SettingTool_Response & msg)
  : msg_(msg)
  {}
  Init_SettingTool_Response_dir sanding(::gui_msgs::srv::SettingTool_Response::_sanding_type arg)
  {
    msg_.sanding = std::move(arg);
    return Init_SettingTool_Response_dir(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

class Init_SettingTool_Response_tool_pressure
{
public:
  explicit Init_SettingTool_Response_tool_pressure(::gui_msgs::srv::SettingTool_Response & msg)
  : msg_(msg)
  {}
  Init_SettingTool_Response_sanding tool_pressure(::gui_msgs::srv::SettingTool_Response::_tool_pressure_type arg)
  {
    msg_.tool_pressure = std::move(arg);
    return Init_SettingTool_Response_sanding(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

class Init_SettingTool_Response_tool_length
{
public:
  explicit Init_SettingTool_Response_tool_length(::gui_msgs::srv::SettingTool_Response & msg)
  : msg_(msg)
  {}
  Init_SettingTool_Response_tool_pressure tool_length(::gui_msgs::srv::SettingTool_Response::_tool_length_type arg)
  {
    msg_.tool_length = std::move(arg);
    return Init_SettingTool_Response_tool_pressure(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

class Init_SettingTool_Response_tool_diameter
{
public:
  explicit Init_SettingTool_Response_tool_diameter(::gui_msgs::srv::SettingTool_Response & msg)
  : msg_(msg)
  {}
  Init_SettingTool_Response_tool_length tool_diameter(::gui_msgs::srv::SettingTool_Response::_tool_diameter_type arg)
  {
    msg_.tool_diameter = std::move(arg);
    return Init_SettingTool_Response_tool_length(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

class Init_SettingTool_Response_feed_rate
{
public:
  explicit Init_SettingTool_Response_feed_rate(::gui_msgs::srv::SettingTool_Response & msg)
  : msg_(msg)
  {}
  Init_SettingTool_Response_tool_diameter feed_rate(::gui_msgs::srv::SettingTool_Response::_feed_rate_type arg)
  {
    msg_.feed_rate = std::move(arg);
    return Init_SettingTool_Response_tool_diameter(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

class Init_SettingTool_Response_tool_rpm
{
public:
  Init_SettingTool_Response_tool_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SettingTool_Response_feed_rate tool_rpm(::gui_msgs::srv::SettingTool_Response::_tool_rpm_type arg)
  {
    msg_.tool_rpm = std::move(arg);
    return Init_SettingTool_Response_feed_rate(msg_);
  }

private:
  ::gui_msgs::srv::SettingTool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::srv::SettingTool_Response>()
{
  return gui_msgs::srv::builder::Init_SettingTool_Response_tool_rpm();
}

}  // namespace gui_msgs

#endif  // GUI_MSGS__SRV__DETAIL__SETTING_TOOL__BUILDER_HPP_
