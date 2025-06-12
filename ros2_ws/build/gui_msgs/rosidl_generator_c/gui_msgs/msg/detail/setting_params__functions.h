// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gui_msgs:msg/SettingParams.idl
// generated code does not contain a copyright notice

#ifndef GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__FUNCTIONS_H_
#define GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gui_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gui_msgs/msg/detail/setting_params__struct.h"

/// Initialize msg/SettingParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gui_msgs__msg__SettingParams
 * )) before or use
 * gui_msgs__msg__SettingParams__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
bool
gui_msgs__msg__SettingParams__init(gui_msgs__msg__SettingParams * msg);

/// Finalize msg/SettingParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
void
gui_msgs__msg__SettingParams__fini(gui_msgs__msg__SettingParams * msg);

/// Create msg/SettingParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gui_msgs__msg__SettingParams__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
gui_msgs__msg__SettingParams *
gui_msgs__msg__SettingParams__create();

/// Destroy msg/SettingParams message.
/**
 * It calls
 * gui_msgs__msg__SettingParams__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
void
gui_msgs__msg__SettingParams__destroy(gui_msgs__msg__SettingParams * msg);

/// Check for msg/SettingParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
bool
gui_msgs__msg__SettingParams__are_equal(const gui_msgs__msg__SettingParams * lhs, const gui_msgs__msg__SettingParams * rhs);

/// Copy a msg/SettingParams message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
bool
gui_msgs__msg__SettingParams__copy(
  const gui_msgs__msg__SettingParams * input,
  gui_msgs__msg__SettingParams * output);

/// Initialize array of msg/SettingParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * gui_msgs__msg__SettingParams__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
bool
gui_msgs__msg__SettingParams__Sequence__init(gui_msgs__msg__SettingParams__Sequence * array, size_t size);

/// Finalize array of msg/SettingParams messages.
/**
 * It calls
 * gui_msgs__msg__SettingParams__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
void
gui_msgs__msg__SettingParams__Sequence__fini(gui_msgs__msg__SettingParams__Sequence * array);

/// Create array of msg/SettingParams messages.
/**
 * It allocates the memory for the array and calls
 * gui_msgs__msg__SettingParams__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
gui_msgs__msg__SettingParams__Sequence *
gui_msgs__msg__SettingParams__Sequence__create(size_t size);

/// Destroy array of msg/SettingParams messages.
/**
 * It calls
 * gui_msgs__msg__SettingParams__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
void
gui_msgs__msg__SettingParams__Sequence__destroy(gui_msgs__msg__SettingParams__Sequence * array);

/// Check for msg/SettingParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
bool
gui_msgs__msg__SettingParams__Sequence__are_equal(const gui_msgs__msg__SettingParams__Sequence * lhs, const gui_msgs__msg__SettingParams__Sequence * rhs);

/// Copy an array of msg/SettingParams messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gui_msgs
bool
gui_msgs__msg__SettingParams__Sequence__copy(
  const gui_msgs__msg__SettingParams__Sequence * input,
  gui_msgs__msg__SettingParams__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GUI_MSGS__MSG__DETAIL__SETTING_PARAMS__FUNCTIONS_H_
