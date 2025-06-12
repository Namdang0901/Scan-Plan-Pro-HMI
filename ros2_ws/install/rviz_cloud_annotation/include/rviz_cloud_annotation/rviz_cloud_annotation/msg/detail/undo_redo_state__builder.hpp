// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_cloud_annotation:msg/UndoRedoState.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__BUILDER_HPP_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rviz_cloud_annotation/msg/detail/undo_redo_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rviz_cloud_annotation
{

namespace msg
{

namespace builder
{

class Init_UndoRedoState_undo_description
{
public:
  explicit Init_UndoRedoState_undo_description(::rviz_cloud_annotation::msg::UndoRedoState & msg)
  : msg_(msg)
  {}
  ::rviz_cloud_annotation::msg::UndoRedoState undo_description(::rviz_cloud_annotation::msg::UndoRedoState::_undo_description_type arg)
  {
    msg_.undo_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::UndoRedoState msg_;
};

class Init_UndoRedoState_undo_enabled
{
public:
  explicit Init_UndoRedoState_undo_enabled(::rviz_cloud_annotation::msg::UndoRedoState & msg)
  : msg_(msg)
  {}
  Init_UndoRedoState_undo_description undo_enabled(::rviz_cloud_annotation::msg::UndoRedoState::_undo_enabled_type arg)
  {
    msg_.undo_enabled = std::move(arg);
    return Init_UndoRedoState_undo_description(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::UndoRedoState msg_;
};

class Init_UndoRedoState_redo_description
{
public:
  explicit Init_UndoRedoState_redo_description(::rviz_cloud_annotation::msg::UndoRedoState & msg)
  : msg_(msg)
  {}
  Init_UndoRedoState_undo_enabled redo_description(::rviz_cloud_annotation::msg::UndoRedoState::_redo_description_type arg)
  {
    msg_.redo_description = std::move(arg);
    return Init_UndoRedoState_undo_enabled(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::UndoRedoState msg_;
};

class Init_UndoRedoState_redo_enabled
{
public:
  Init_UndoRedoState_redo_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UndoRedoState_redo_description redo_enabled(::rviz_cloud_annotation::msg::UndoRedoState::_redo_enabled_type arg)
  {
    msg_.redo_enabled = std::move(arg);
    return Init_UndoRedoState_redo_description(msg_);
  }

private:
  ::rviz_cloud_annotation::msg::UndoRedoState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_cloud_annotation::msg::UndoRedoState>()
{
  return rviz_cloud_annotation::msg::builder::Init_UndoRedoState_redo_enabled();
}

}  // namespace rviz_cloud_annotation

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__UNDO_REDO_STATE__BUILDER_HPP_
