// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/CaptureAndSave.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_SAVE__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_SAVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/capture_and_save__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureAndSave_Request_file_path
{
public:
  Init_CaptureAndSave_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zivid_interfaces::srv::CaptureAndSave_Request file_path(::zivid_interfaces::srv::CaptureAndSave_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAndSave_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CaptureAndSave_Request>()
{
  return zivid_interfaces::srv::builder::Init_CaptureAndSave_Request_file_path();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureAndSave_Response_message
{
public:
  explicit Init_CaptureAndSave_Response_message(::zivid_interfaces::srv::CaptureAndSave_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::CaptureAndSave_Response message(::zivid_interfaces::srv::CaptureAndSave_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAndSave_Response msg_;
};

class Init_CaptureAndSave_Response_success
{
public:
  Init_CaptureAndSave_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureAndSave_Response_message success(::zivid_interfaces::srv::CaptureAndSave_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CaptureAndSave_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAndSave_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CaptureAndSave_Response>()
{
  return zivid_interfaces::srv::builder::Init_CaptureAndSave_Response_success();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_SAVE__BUILDER_HPP_
