// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zivid_interfaces:srv/CaptureAndDetectCalibrationBoard.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/srv/detail/capture_and_detect_calibration_board__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/srv/detail/capture_and_detect_calibration_board__struct.h"
#include "zivid_interfaces/srv/detail/capture_and_detect_calibration_board__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CaptureAndDetectCalibrationBoard_Request__ros_msg_type = zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request;

static bool _CaptureAndDetectCalibrationBoard_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CaptureAndDetectCalibrationBoard_Request__ros_msg_type * ros_message = static_cast<const _CaptureAndDetectCalibrationBoard_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _CaptureAndDetectCalibrationBoard_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CaptureAndDetectCalibrationBoard_Request__ros_msg_type * ros_message = static_cast<_CaptureAndDetectCalibrationBoard_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CaptureAndDetectCalibrationBoard_Request__ros_msg_type * ros_message = static_cast<const _CaptureAndDetectCalibrationBoard_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CaptureAndDetectCalibrationBoard_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CaptureAndDetectCalibrationBoard_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CaptureAndDetectCalibrationBoard_Request = {
  "zivid_interfaces::srv",
  "CaptureAndDetectCalibrationBoard_Request",
  _CaptureAndDetectCalibrationBoard_Request__cdr_serialize,
  _CaptureAndDetectCalibrationBoard_Request__cdr_deserialize,
  _CaptureAndDetectCalibrationBoard_Request__get_serialized_size,
  _CaptureAndDetectCalibrationBoard_Request__max_serialized_size
};

static rosidl_message_type_support_t _CaptureAndDetectCalibrationBoard_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CaptureAndDetectCalibrationBoard_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndDetectCalibrationBoard_Request)() {
  return &_CaptureAndDetectCalibrationBoard_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_detect_calibration_board__struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_detect_calibration_board__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__functions.h"  // detection_result

// forward declare type support functions
size_t get_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, DetectionResultCalibrationBoard)();


using _CaptureAndDetectCalibrationBoard_Response__ros_msg_type = zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response;

static bool _CaptureAndDetectCalibrationBoard_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CaptureAndDetectCalibrationBoard_Response__ros_msg_type * ros_message = static_cast<const _CaptureAndDetectCalibrationBoard_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: detection_result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, DetectionResultCalibrationBoard
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->detection_result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CaptureAndDetectCalibrationBoard_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CaptureAndDetectCalibrationBoard_Response__ros_msg_type * ros_message = static_cast<_CaptureAndDetectCalibrationBoard_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: detection_result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, DetectionResultCalibrationBoard
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->detection_result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CaptureAndDetectCalibrationBoard_Response__ros_msg_type * ros_message = static_cast<const _CaptureAndDetectCalibrationBoard_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name detection_result

  current_alignment += get_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
    &(ros_message->detection_result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CaptureAndDetectCalibrationBoard_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: detection_result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response;
    is_plain =
      (
      offsetof(DataType, detection_result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CaptureAndDetectCalibrationBoard_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__srv__CaptureAndDetectCalibrationBoard_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CaptureAndDetectCalibrationBoard_Response = {
  "zivid_interfaces::srv",
  "CaptureAndDetectCalibrationBoard_Response",
  _CaptureAndDetectCalibrationBoard_Response__cdr_serialize,
  _CaptureAndDetectCalibrationBoard_Response__cdr_deserialize,
  _CaptureAndDetectCalibrationBoard_Response__get_serialized_size,
  _CaptureAndDetectCalibrationBoard_Response__max_serialized_size
};

static rosidl_message_type_support_t _CaptureAndDetectCalibrationBoard_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CaptureAndDetectCalibrationBoard_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndDetectCalibrationBoard_Response)() {
  return &_CaptureAndDetectCalibrationBoard_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/srv/capture_and_detect_calibration_board.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CaptureAndDetectCalibrationBoard__callbacks = {
  "zivid_interfaces::srv",
  "CaptureAndDetectCalibrationBoard",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndDetectCalibrationBoard_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndDetectCalibrationBoard_Response)(),
};

static rosidl_service_type_support_t CaptureAndDetectCalibrationBoard__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CaptureAndDetectCalibrationBoard__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndDetectCalibrationBoard)() {
  return &CaptureAndDetectCalibrationBoard__handle;
}

#if defined(__cplusplus)
}
#endif
