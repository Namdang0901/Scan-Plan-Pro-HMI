// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gui_msgs:msg/TrajectorySetting.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__BUILDER_HPP_
#define GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gui_msgs/msg/detail/trajectory_setting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gui_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectorySetting_parameters
{
public:
  explicit Init_TrajectorySetting_parameters(::gui_msgs::msg::TrajectorySetting & msg)
  : msg_(msg)
  {}
  ::gui_msgs::msg::TrajectorySetting parameters(::gui_msgs::msg::TrajectorySetting::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::msg::TrajectorySetting msg_;
};

class Init_TrajectorySetting_tool
{
public:
  Init_TrajectorySetting_tool()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectorySetting_parameters tool(::gui_msgs::msg::TrajectorySetting::_tool_type arg)
  {
    msg_.tool = std::move(arg);
    return Init_TrajectorySetting_parameters(msg_);
  }

private:
  ::gui_msgs::msg::TrajectorySetting msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::msg::TrajectorySetting>()
{
  return gui_msgs::msg::builder::Init_TrajectorySetting_tool();
}

}  // namespace gui_msgs

#endif  // GUI_MSGS__MSG__DETAIL__TRAJECTORY_SETTING__BUILDER_HPP_
