// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gui_msgs:srv/TrajectorySetting.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__BUILDER_HPP_
#define GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gui_msgs/srv/detail/trajectory_setting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gui_msgs
{

namespace srv
{

namespace builder
{

class Init_TrajectorySetting_Request_req
{
public:
  Init_TrajectorySetting_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gui_msgs::srv::TrajectorySetting_Request req(::gui_msgs::srv::TrajectorySetting_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::srv::TrajectorySetting_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::srv::TrajectorySetting_Request>()
{
  return gui_msgs::srv::builder::Init_TrajectorySetting_Request_req();
}

}  // namespace gui_msgs


namespace gui_msgs
{

namespace srv
{

namespace builder
{

class Init_TrajectorySetting_Response_parameters
{
public:
  explicit Init_TrajectorySetting_Response_parameters(::gui_msgs::srv::TrajectorySetting_Response & msg)
  : msg_(msg)
  {}
  ::gui_msgs::srv::TrajectorySetting_Response parameters(::gui_msgs::srv::TrajectorySetting_Response::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::srv::TrajectorySetting_Response msg_;
};

class Init_TrajectorySetting_Response_tool
{
public:
  Init_TrajectorySetting_Response_tool()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectorySetting_Response_parameters tool(::gui_msgs::srv::TrajectorySetting_Response::_tool_type arg)
  {
    msg_.tool = std::move(arg);
    return Init_TrajectorySetting_Response_parameters(msg_);
  }

private:
  ::gui_msgs::srv::TrajectorySetting_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::srv::TrajectorySetting_Response>()
{
  return gui_msgs::srv::builder::Init_TrajectorySetting_Response_tool();
}

}  // namespace gui_msgs

#endif  // GUI_MSGS__SRV__DETAIL__TRAJECTORY_SETTING__BUILDER_HPP_
