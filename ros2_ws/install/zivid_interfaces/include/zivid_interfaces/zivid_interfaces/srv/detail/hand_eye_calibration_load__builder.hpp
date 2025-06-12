// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationLoad.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/hand_eye_calibration_load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_HandEyeCalibrationLoad_Request_calibration_objects
{
public:
  explicit Init_HandEyeCalibrationLoad_Request_calibration_objects(::zivid_interfaces::srv::HandEyeCalibrationLoad_Request & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::HandEyeCalibrationLoad_Request calibration_objects(::zivid_interfaces::srv::HandEyeCalibrationLoad_Request::_calibration_objects_type arg)
  {
    msg_.calibration_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationLoad_Request msg_;
};

class Init_HandEyeCalibrationLoad_Request_working_directory
{
public:
  Init_HandEyeCalibrationLoad_Request_working_directory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationLoad_Request_calibration_objects working_directory(::zivid_interfaces::srv::HandEyeCalibrationLoad_Request::_working_directory_type arg)
  {
    msg_.working_directory = std::move(arg);
    return Init_HandEyeCalibrationLoad_Request_calibration_objects(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationLoad_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::HandEyeCalibrationLoad_Request>()
{
  return zivid_interfaces::srv::builder::Init_HandEyeCalibrationLoad_Request_working_directory();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_HandEyeCalibrationLoad_Response_message
{
public:
  explicit Init_HandEyeCalibrationLoad_Response_message(::zivid_interfaces::srv::HandEyeCalibrationLoad_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::HandEyeCalibrationLoad_Response message(::zivid_interfaces::srv::HandEyeCalibrationLoad_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationLoad_Response msg_;
};

class Init_HandEyeCalibrationLoad_Response_success
{
public:
  Init_HandEyeCalibrationLoad_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationLoad_Response_message success(::zivid_interfaces::srv::HandEyeCalibrationLoad_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HandEyeCalibrationLoad_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationLoad_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::HandEyeCalibrationLoad_Response>()
{
  return zivid_interfaces::srv::builder::Init_HandEyeCalibrationLoad_Response_success();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_LOAD__BUILDER_HPP_
