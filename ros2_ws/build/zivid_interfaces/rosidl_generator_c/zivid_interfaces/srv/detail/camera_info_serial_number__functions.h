// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from zivid_interfaces:srv/CameraInfoSerialNumber.idl
// generated code does not contain a copyright notice

#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_SERIAL_NUMBER__FUNCTIONS_H_
#define ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_SERIAL_NUMBER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "zivid_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "zivid_interfaces/srv/detail/camera_info_serial_number__struct.h"

/// Initialize srv/CameraInfoSerialNumber message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * zivid_interfaces__srv__CameraInfoSerialNumber_Request
 * )) before or use
 * zivid_interfaces__srv__CameraInfoSerialNumber_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__init(zivid_interfaces__srv__CameraInfoSerialNumber_Request * msg);

/// Finalize srv/CameraInfoSerialNumber message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__srv__CameraInfoSerialNumber_Request__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Request * msg);

/// Create srv/CameraInfoSerialNumber message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
zivid_interfaces__srv__CameraInfoSerialNumber_Request *
zivid_interfaces__srv__CameraInfoSerialNumber_Request__create();

/// Destroy srv/CameraInfoSerialNumber message.
/**
 * It calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__srv__CameraInfoSerialNumber_Request__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Request * msg);

/// Check for srv/CameraInfoSerialNumber message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Request * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Request * rhs);

/// Copy a srv/CameraInfoSerialNumber message.
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
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Request * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Request * output);

/// Initialize array of srv/CameraInfoSerialNumber messages.
/**
 * It allocates the memory for the number of elements and calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__init(zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * array, size_t size);

/// Finalize array of srv/CameraInfoSerialNumber messages.
/**
 * It calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * array);

/// Create array of srv/CameraInfoSerialNumber messages.
/**
 * It allocates the memory for the array and calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence *
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__create(size_t size);

/// Destroy array of srv/CameraInfoSerialNumber messages.
/**
 * It calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * array);

/// Check for srv/CameraInfoSerialNumber message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * rhs);

/// Copy an array of srv/CameraInfoSerialNumber messages.
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
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * output);

/// Initialize srv/CameraInfoSerialNumber message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * zivid_interfaces__srv__CameraInfoSerialNumber_Response
 * )) before or use
 * zivid_interfaces__srv__CameraInfoSerialNumber_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__init(zivid_interfaces__srv__CameraInfoSerialNumber_Response * msg);

/// Finalize srv/CameraInfoSerialNumber message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Response * msg);

/// Create srv/CameraInfoSerialNumber message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
zivid_interfaces__srv__CameraInfoSerialNumber_Response *
zivid_interfaces__srv__CameraInfoSerialNumber_Response__create();

/// Destroy srv/CameraInfoSerialNumber message.
/**
 * It calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__srv__CameraInfoSerialNumber_Response__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Response * msg);

/// Check for srv/CameraInfoSerialNumber message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Response * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Response * rhs);

/// Copy a srv/CameraInfoSerialNumber message.
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
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Response * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Response * output);

/// Initialize array of srv/CameraInfoSerialNumber messages.
/**
 * It allocates the memory for the number of elements and calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__init(zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * array, size_t size);

/// Finalize array of srv/CameraInfoSerialNumber messages.
/**
 * It calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * array);

/// Create array of srv/CameraInfoSerialNumber messages.
/**
 * It allocates the memory for the array and calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence *
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__create(size_t size);

/// Destroy array of srv/CameraInfoSerialNumber messages.
/**
 * It calls
 * zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * array);

/// Check for srv/CameraInfoSerialNumber message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * rhs);

/// Copy an array of srv/CameraInfoSerialNumber messages.
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
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_SERIAL_NUMBER__FUNCTIONS_H_
