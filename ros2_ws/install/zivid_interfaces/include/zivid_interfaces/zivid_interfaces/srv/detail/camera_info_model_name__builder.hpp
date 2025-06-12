// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/CameraInfoModelName.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/camera_info_model_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CameraInfoModelName_Request>()
{
  return ::zivid_interfaces::srv::CameraInfoModelName_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CameraInfoModelName_Response_model_name
{
public:
  Init_CameraInfoModelName_Response_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zivid_interfaces::srv::CameraInfoModelName_Response model_name(::zivid_interfaces::srv::CameraInfoModelName_Response::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CameraInfoModelName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CameraInfoModelName_Response>()
{
  return zivid_interfaces::srv::builder::Init_CameraInfoModelName_Response_model_name();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__BUILDER_HPP_
