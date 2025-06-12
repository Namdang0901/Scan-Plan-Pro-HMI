// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/CaptureAndDetectMarkers.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/capture_and_detect_markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureAndDetectMarkers_Request_marker_dictionary
{
public:
  explicit Init_CaptureAndDetectMarkers_Request_marker_dictionary(::zivid_interfaces::srv::CaptureAndDetectMarkers_Request & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::CaptureAndDetectMarkers_Request marker_dictionary(::zivid_interfaces::srv::CaptureAndDetectMarkers_Request::_marker_dictionary_type arg)
  {
    msg_.marker_dictionary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAndDetectMarkers_Request msg_;
};

class Init_CaptureAndDetectMarkers_Request_marker_ids
{
public:
  Init_CaptureAndDetectMarkers_Request_marker_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureAndDetectMarkers_Request_marker_dictionary marker_ids(::zivid_interfaces::srv::CaptureAndDetectMarkers_Request::_marker_ids_type arg)
  {
    msg_.marker_ids = std::move(arg);
    return Init_CaptureAndDetectMarkers_Request_marker_dictionary(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAndDetectMarkers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CaptureAndDetectMarkers_Request>()
{
  return zivid_interfaces::srv::builder::Init_CaptureAndDetectMarkers_Request_marker_ids();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureAndDetectMarkers_Response_detection_result
{
public:
  explicit Init_CaptureAndDetectMarkers_Response_detection_result(::zivid_interfaces::srv::CaptureAndDetectMarkers_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::CaptureAndDetectMarkers_Response detection_result(::zivid_interfaces::srv::CaptureAndDetectMarkers_Response::_detection_result_type arg)
  {
    msg_.detection_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAndDetectMarkers_Response msg_;
};

class Init_CaptureAndDetectMarkers_Response_message
{
public:
  explicit Init_CaptureAndDetectMarkers_Response_message(::zivid_interfaces::srv::CaptureAndDetectMarkers_Response & msg)
  : msg_(msg)
  {}
  Init_CaptureAndDetectMarkers_Response_detection_result message(::zivid_interfaces::srv::CaptureAndDetectMarkers_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CaptureAndDetectMarkers_Response_detection_result(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAndDetectMarkers_Response msg_;
};

class Init_CaptureAndDetectMarkers_Response_success
{
public:
  Init_CaptureAndDetectMarkers_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureAndDetectMarkers_Response_message success(::zivid_interfaces::srv::CaptureAndDetectMarkers_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CaptureAndDetectMarkers_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAndDetectMarkers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CaptureAndDetectMarkers_Response>()
{
  return zivid_interfaces::srv::builder::Init_CaptureAndDetectMarkers_Response_success();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__BUILDER_HPP_
