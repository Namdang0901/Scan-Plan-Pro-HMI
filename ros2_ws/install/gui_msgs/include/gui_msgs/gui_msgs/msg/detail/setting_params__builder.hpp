// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gui_msgs:msg/SettingParams.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__BUILDER_HPP_
#define GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gui_msgs/msg/detail/setting_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gui_msgs
{

namespace msg
{

namespace builder
{

class Init_SettingParams_spindle_speed
{
public:
  explicit Init_SettingParams_spindle_speed(::gui_msgs::msg::SettingParams & msg)
  : msg_(msg)
  {}
  ::gui_msgs::msg::SettingParams spindle_speed(::gui_msgs::msg::SettingParams::_spindle_speed_type arg)
  {
    msg_.spindle_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::msg::SettingParams msg_;
};

class Init_SettingParams_grinding_force
{
public:
  explicit Init_SettingParams_grinding_force(::gui_msgs::msg::SettingParams & msg)
  : msg_(msg)
  {}
  Init_SettingParams_spindle_speed grinding_force(::gui_msgs::msg::SettingParams::_grinding_force_type arg)
  {
    msg_.grinding_force = std::move(arg);
    return Init_SettingParams_spindle_speed(msg_);
  }

private:
  ::gui_msgs::msg::SettingParams msg_;
};

class Init_SettingParams_grinding_speed
{
public:
  explicit Init_SettingParams_grinding_speed(::gui_msgs::msg::SettingParams & msg)
  : msg_(msg)
  {}
  Init_SettingParams_grinding_force grinding_speed(::gui_msgs::msg::SettingParams::_grinding_speed_type arg)
  {
    msg_.grinding_speed = std::move(arg);
    return Init_SettingParams_grinding_force(msg_);
  }

private:
  ::gui_msgs::msg::SettingParams msg_;
};

class Init_SettingParams_rotation
{
public:
  explicit Init_SettingParams_rotation(::gui_msgs::msg::SettingParams & msg)
  : msg_(msg)
  {}
  Init_SettingParams_grinding_speed rotation(::gui_msgs::msg::SettingParams::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_SettingParams_grinding_speed(msg_);
  }

private:
  ::gui_msgs::msg::SettingParams msg_;
};

class Init_SettingParams_linear
{
public:
  Init_SettingParams_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SettingParams_rotation linear(::gui_msgs::msg::SettingParams::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_SettingParams_rotation(msg_);
  }

private:
  ::gui_msgs::msg::SettingParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::msg::SettingParams>()
{
  return gui_msgs::msg::builder::Init_SettingParams_linear();
}

}  // namespace gui_msgs

#endif  // GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__BUILDER_HPP_
