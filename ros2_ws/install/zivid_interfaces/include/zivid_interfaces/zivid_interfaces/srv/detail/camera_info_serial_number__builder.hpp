// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/CameraInfoSerialNumber.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_SERIAL_NUMBER__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_SERIAL_NUMBER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/camera_info_serial_number__struct.hpp"
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
auto build<::zivid_interfaces::srv::CameraInfoSerialNumber_Request>()
{
  return ::zivid_interfaces::srv::CameraInfoSerialNumber_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CameraInfoSerialNumber_Response_serial_number
{
public:
  Init_CameraInfoSerialNumber_Response_serial_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zivid_interfaces::srv::CameraInfoSerialNumber_Response serial_number(::zivid_interfaces::srv::CameraInfoSerialNumber_Response::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CameraInfoSerialNumber_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CameraInfoSerialNumber_Response>()
{
  return zivid_interfaces::srv::builder::Init_CameraInfoSerialNumber_Response_serial_number();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_SERIAL_NUMBER__BUILDER_HPP_
