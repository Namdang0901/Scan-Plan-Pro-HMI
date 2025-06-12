// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rviz_cloud_annotation:msg/RectangleSelectionViewport.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__FUNCTIONS_H_
#define RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rviz_cloud_annotation/msg/rosidl_generator_c__visibility_control.h"

#include "rviz_cloud_annotation/msg/detail/rectangle_selection_viewport__struct.h"

/// Initialize msg/RectangleSelectionViewport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rviz_cloud_annotation__msg__RectangleSelectionViewport
 * )) before or use
 * rviz_cloud_annotation__msg__RectangleSelectionViewport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__init(rviz_cloud_annotation__msg__RectangleSelectionViewport * msg);

/// Finalize msg/RectangleSelectionViewport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
void
rviz_cloud_annotation__msg__RectangleSelectionViewport__fini(rviz_cloud_annotation__msg__RectangleSelectionViewport * msg);

/// Create msg/RectangleSelectionViewport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rviz_cloud_annotation__msg__RectangleSelectionViewport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
rviz_cloud_annotation__msg__RectangleSelectionViewport *
rviz_cloud_annotation__msg__RectangleSelectionViewport__create();

/// Destroy msg/RectangleSelectionViewport message.
/**
 * It calls
 * rviz_cloud_annotation__msg__RectangleSelectionViewport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
void
rviz_cloud_annotation__msg__RectangleSelectionViewport__destroy(rviz_cloud_annotation__msg__RectangleSelectionViewport * msg);

/// Check for msg/RectangleSelectionViewport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__are_equal(const rviz_cloud_annotation__msg__RectangleSelectionViewport * lhs, const rviz_cloud_annotation__msg__RectangleSelectionViewport * rhs);

/// Copy a msg/RectangleSelectionViewport message.
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
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__copy(
  const rviz_cloud_annotation__msg__RectangleSelectionViewport * input,
  rviz_cloud_annotation__msg__RectangleSelectionViewport * output);

/// Initialize array of msg/RectangleSelectionViewport messages.
/**
 * It allocates the memory for the number of elements and calls
 * rviz_cloud_annotation__msg__RectangleSelectionViewport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__init(rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * array, size_t size);

/// Finalize array of msg/RectangleSelectionViewport messages.
/**
 * It calls
 * rviz_cloud_annotation__msg__RectangleSelectionViewport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
void
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__fini(rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * array);

/// Create array of msg/RectangleSelectionViewport messages.
/**
 * It allocates the memory for the array and calls
 * rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence *
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__create(size_t size);

/// Destroy array of msg/RectangleSelectionViewport messages.
/**
 * It calls
 * rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
void
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__destroy(rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * array);

/// Check for msg/RectangleSelectionViewport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__are_equal(const rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * lhs, const rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * rhs);

/// Copy an array of msg/RectangleSelectionViewport messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rviz_cloud_annotation
bool
rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence__copy(
  const rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * input,
  rviz_cloud_annotation__msg__RectangleSelectionViewport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_CLOUD_ANNOTATION__MSG__DETAIL__RECTANGLE_SELECTION_VIEWPORT__FUNCTIONS_H_
