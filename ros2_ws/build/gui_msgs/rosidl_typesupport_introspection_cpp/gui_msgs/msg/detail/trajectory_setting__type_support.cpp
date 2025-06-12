// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gui_msgs:msg/TrajectorySetting.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gui_msgs/msg/detail/trajectory_setting__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gui_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectorySetting_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gui_msgs::msg::TrajectorySetting(_init);
}

void TrajectorySetting_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gui_msgs::msg::TrajectorySetting *>(message_memory);
  typed_message->~TrajectorySetting();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectorySetting_message_member_array[2] = {
  {
    "tool",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gui_msgs::msg::TrajectorySetting, tool),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gui_msgs::msg::TrajectorySetting, parameters),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectorySetting_message_members = {
  "gui_msgs::msg",  // message namespace
  "TrajectorySetting",  // message name
  2,  // number of fields
  sizeof(gui_msgs::msg::TrajectorySetting),
  TrajectorySetting_message_member_array,  // message members
  TrajectorySetting_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectorySetting_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectorySetting_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectorySetting_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace gui_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gui_msgs::msg::TrajectorySetting>()
{
  return &::gui_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectorySetting_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gui_msgs, msg, TrajectorySetting)() {
  return &::gui_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectorySetting_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
