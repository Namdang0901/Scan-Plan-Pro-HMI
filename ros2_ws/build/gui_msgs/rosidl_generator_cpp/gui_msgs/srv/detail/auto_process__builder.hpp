// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gui_msgs:srv/AutoProcess.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__BUILDER_HPP_
#define GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gui_msgs/srv/detail/auto_process__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gui_msgs
{

namespace srv
{

namespace builder
{

class Init_AutoProcess_Request_req
{
public:
  Init_AutoProcess_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gui_msgs::srv::AutoProcess_Request req(::gui_msgs::srv::AutoProcess_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::srv::AutoProcess_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::srv::AutoProcess_Request>()
{
  return gui_msgs::srv::builder::Init_AutoProcess_Request_req();
}

}  // namespace gui_msgs


namespace gui_msgs
{

namespace srv
{

namespace builder
{

class Init_AutoProcess_Response_res
{
public:
  Init_AutoProcess_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gui_msgs::srv::AutoProcess_Response res(::gui_msgs::srv::AutoProcess_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::srv::AutoProcess_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::srv::AutoProcess_Response>()
{
  return gui_msgs::srv::builder::Init_AutoProcess_Response_res();
}

}  // namespace gui_msgs

#endif  // GUI_MSGS__SRV__DETAIL__AUTO_PROCESS__BUILDER_HPP_
