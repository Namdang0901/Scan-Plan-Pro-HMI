// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gui_msgs:srv/SettingParams.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__BUILDER_HPP_
#define GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gui_msgs/srv/detail/setting_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gui_msgs
{

namespace srv
{

namespace builder
{

class Init_SettingParams_Request_req
{
public:
  Init_SettingParams_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gui_msgs::srv::SettingParams_Request req(::gui_msgs::srv::SettingParams_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::srv::SettingParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::srv::SettingParams_Request>()
{
  return gui_msgs::srv::builder::Init_SettingParams_Request_req();
}

}  // namespace gui_msgs


namespace gui_msgs
{

namespace srv
{

namespace builder
{

class Init_SettingParams_Response_spindle_speed
{
public:
  explicit Init_SettingParams_Response_spindle_speed(::gui_msgs::srv::SettingParams_Response & msg)
  : msg_(msg)
  {}
  ::gui_msgs::srv::SettingParams_Response spindle_speed(::gui_msgs::srv::SettingParams_Response::_spindle_speed_type arg)
  {
    msg_.spindle_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::srv::SettingParams_Response msg_;
};

class Init_SettingParams_Response_grinding_force
{
public:
  explicit Init_SettingParams_Response_grinding_force(::gui_msgs::srv::SettingParams_Response & msg)
  : msg_(msg)
  {}
  Init_SettingParams_Response_spindle_speed grinding_force(::gui_msgs::srv::SettingParams_Response::_grinding_force_type arg)
  {
    msg_.grinding_force = std::move(arg);
    return Init_SettingParams_Response_spindle_speed(msg_);
  }

private:
  ::gui_msgs::srv::SettingParams_Response msg_;
};

class Init_SettingParams_Response_grinding_speed
{
public:
  explicit Init_SettingParams_Response_grinding_speed(::gui_msgs::srv::SettingParams_Response & msg)
  : msg_(msg)
  {}
  Init_SettingParams_Response_grinding_force grinding_speed(::gui_msgs::srv::SettingParams_Response::_grinding_speed_type arg)
  {
    msg_.grinding_speed = std::move(arg);
    return Init_SettingParams_Response_grinding_force(msg_);
  }

private:
  ::gui_msgs::srv::SettingParams_Response msg_;
};

class Init_SettingParams_Response_rotation
{
public:
  explicit Init_SettingParams_Response_rotation(::gui_msgs::srv::SettingParams_Response & msg)
  : msg_(msg)
  {}
  Init_SettingParams_Response_grinding_speed rotation(::gui_msgs::srv::SettingParams_Response::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_SettingParams_Response_grinding_speed(msg_);
  }

private:
  ::gui_msgs::srv::SettingParams_Response msg_;
};

class Init_SettingParams_Response_linear
{
public:
  Init_SettingParams_Response_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SettingParams_Response_rotation linear(::gui_msgs::srv::SettingParams_Response::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_SettingParams_Response_rotation(msg_);
  }

private:
  ::gui_msgs::srv::SettingParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::srv::SettingParams_Response>()
{
  return gui_msgs::srv::builder::Init_SettingParams_Response_linear();
}

}  // namespace gui_msgs

#endif  // GUI_MSGS__SRV__DETAIL__SETTING_PARAMS__BUILDER_HPP_
