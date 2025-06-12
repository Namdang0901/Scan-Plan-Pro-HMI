// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:srv/CaptureAndDetectMarkers.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "zivid_interfaces/srv/detail/capture_and_detect_markers__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CaptureAndDetectMarkers_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::srv::CaptureAndDetectMarkers_Request(_init);
}

void CaptureAndDetectMarkers_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::srv::CaptureAndDetectMarkers_Request *>(message_memory);
  typed_message->~CaptureAndDetectMarkers_Request();
}

size_t size_function__CaptureAndDetectMarkers_Request__marker_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureAndDetectMarkers_Request__marker_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureAndDetectMarkers_Request__marker_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureAndDetectMarkers_Request__marker_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__CaptureAndDetectMarkers_Request__marker_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__CaptureAndDetectMarkers_Request__marker_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__CaptureAndDetectMarkers_Request__marker_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__CaptureAndDetectMarkers_Request__marker_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CaptureAndDetectMarkers_Request_message_member_array[2] = {
  {
    "marker_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::CaptureAndDetectMarkers_Request, marker_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureAndDetectMarkers_Request__marker_ids,  // size() function pointer
    get_const_function__CaptureAndDetectMarkers_Request__marker_ids,  // get_const(index) function pointer
    get_function__CaptureAndDetectMarkers_Request__marker_ids,  // get(index) function pointer
    fetch_function__CaptureAndDetectMarkers_Request__marker_ids,  // fetch(index, &value) function pointer
    assign_function__CaptureAndDetectMarkers_Request__marker_ids,  // assign(index, value) function pointer
    resize_function__CaptureAndDetectMarkers_Request__marker_ids  // resize(index) function pointer
  },
  {
    "marker_dictionary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::CaptureAndDetectMarkers_Request, marker_dictionary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CaptureAndDetectMarkers_Request_message_members = {
  "zivid_interfaces::srv",  // message namespace
  "CaptureAndDetectMarkers_Request",  // message name
  2,  // number of fields
  sizeof(zivid_interfaces::srv::CaptureAndDetectMarkers_Request),
  CaptureAndDetectMarkers_Request_message_member_array,  // message members
  CaptureAndDetectMarkers_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CaptureAndDetectMarkers_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CaptureAndDetectMarkers_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CaptureAndDetectMarkers_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::CaptureAndDetectMarkers_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, CaptureAndDetectMarkers_Request)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::CaptureAndDetectMarkers_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_detect_markers__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CaptureAndDetectMarkers_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::srv::CaptureAndDetectMarkers_Response(_init);
}

void CaptureAndDetectMarkers_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::srv::CaptureAndDetectMarkers_Response *>(message_memory);
  typed_message->~CaptureAndDetectMarkers_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CaptureAndDetectMarkers_Response_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::CaptureAndDetectMarkers_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::CaptureAndDetectMarkers_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detection_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<zivid_interfaces::msg::DetectionResultFiducialMarkers>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::CaptureAndDetectMarkers_Response, detection_result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CaptureAndDetectMarkers_Response_message_members = {
  "zivid_interfaces::srv",  // message namespace
  "CaptureAndDetectMarkers_Response",  // message name
  3,  // number of fields
  sizeof(zivid_interfaces::srv::CaptureAndDetectMarkers_Response),
  CaptureAndDetectMarkers_Response_message_member_array,  // message members
  CaptureAndDetectMarkers_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CaptureAndDetectMarkers_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CaptureAndDetectMarkers_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CaptureAndDetectMarkers_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::CaptureAndDetectMarkers_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, CaptureAndDetectMarkers_Response)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::CaptureAndDetectMarkers_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_detect_markers__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CaptureAndDetectMarkers_service_members = {
  "zivid_interfaces::srv",  // service namespace
  "CaptureAndDetectMarkers",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<zivid_interfaces::srv::CaptureAndDetectMarkers>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CaptureAndDetectMarkers_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CaptureAndDetectMarkers_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<zivid_interfaces::srv::CaptureAndDetectMarkers>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::CaptureAndDetectMarkers_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::zivid_interfaces::srv::CaptureAndDetectMarkers_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::zivid_interfaces::srv::CaptureAndDetectMarkers_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, CaptureAndDetectMarkers)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<zivid_interfaces::srv::CaptureAndDetectMarkers>();
}

#ifdef __cplusplus
}
#endif
