// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gui_msgs:msg/AutoProcess.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__BUILDER_HPP_
#define GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gui_msgs/msg/detail/auto_process__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gui_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoProcess_res
{
public:
  Init_AutoProcess_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gui_msgs::msg::AutoProcess res(::gui_msgs::msg::AutoProcess::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gui_msgs::msg::AutoProcess msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gui_msgs::msg::AutoProcess>()
{
  return gui_msgs::msg::builder::Init_AutoProcess_res();
}

}  // namespace gui_msgs

#endif  // GUI_MSGS__MSG__DETAIL__AUTO_PROCESS__BUILDER_HPP_
