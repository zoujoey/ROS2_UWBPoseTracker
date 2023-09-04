// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice
#include "decawave_interfaces/msg/detail/deca_range__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "decawave_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "decawave_interfaces/msg/detail/deca_range__struct.h"
#include "decawave_interfaces/msg/detail/deca_range__functions.h"
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

#include "rosidl_runtime_c/string.h"  // anch_id1, anch_id2, anch_id3, anch_id4, tag_id
#include "rosidl_runtime_c/string_functions.h"  // anch_id1, anch_id2, anch_id3, anch_id4, tag_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_decawave_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_decawave_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_decawave_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DecaRange__ros_msg_type = decawave_interfaces__msg__DecaRange;

static bool _DecaRange__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DecaRange__ros_msg_type * ros_message = static_cast<const _DecaRange__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: tag_id
  {
    const rosidl_runtime_c__String * str = &ros_message->tag_id;
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

  // Field name: anch_id1
  {
    const rosidl_runtime_c__String * str = &ros_message->anch_id1;
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

  // Field name: range1
  {
    cdr << ros_message->range1;
  }

  // Field name: anch_id2
  {
    const rosidl_runtime_c__String * str = &ros_message->anch_id2;
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

  // Field name: range2
  {
    cdr << ros_message->range2;
  }

  // Field name: anch_id3
  {
    const rosidl_runtime_c__String * str = &ros_message->anch_id3;
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

  // Field name: range3
  {
    cdr << ros_message->range3;
  }

  // Field name: anch_id4
  {
    const rosidl_runtime_c__String * str = &ros_message->anch_id4;
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

  // Field name: range4
  {
    cdr << ros_message->range4;
  }

  return true;
}

static bool _DecaRange__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DecaRange__ros_msg_type * ros_message = static_cast<_DecaRange__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: tag_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tag_id.data) {
      rosidl_runtime_c__String__init(&ros_message->tag_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tag_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tag_id'\n");
      return false;
    }
  }

  // Field name: anch_id1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->anch_id1.data) {
      rosidl_runtime_c__String__init(&ros_message->anch_id1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->anch_id1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'anch_id1'\n");
      return false;
    }
  }

  // Field name: range1
  {
    cdr >> ros_message->range1;
  }

  // Field name: anch_id2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->anch_id2.data) {
      rosidl_runtime_c__String__init(&ros_message->anch_id2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->anch_id2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'anch_id2'\n");
      return false;
    }
  }

  // Field name: range2
  {
    cdr >> ros_message->range2;
  }

  // Field name: anch_id3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->anch_id3.data) {
      rosidl_runtime_c__String__init(&ros_message->anch_id3);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->anch_id3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'anch_id3'\n");
      return false;
    }
  }

  // Field name: range3
  {
    cdr >> ros_message->range3;
  }

  // Field name: anch_id4
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->anch_id4.data) {
      rosidl_runtime_c__String__init(&ros_message->anch_id4);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->anch_id4,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'anch_id4'\n");
      return false;
    }
  }

  // Field name: range4
  {
    cdr >> ros_message->range4;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_decawave_interfaces
size_t get_serialized_size_decawave_interfaces__msg__DecaRange(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DecaRange__ros_msg_type * ros_message = static_cast<const _DecaRange__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name tag_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tag_id.size + 1);
  // field.name anch_id1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->anch_id1.size + 1);
  // field.name range1
  {
    size_t item_size = sizeof(ros_message->range1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anch_id2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->anch_id2.size + 1);
  // field.name range2
  {
    size_t item_size = sizeof(ros_message->range2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anch_id3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->anch_id3.size + 1);
  // field.name range3
  {
    size_t item_size = sizeof(ros_message->range3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anch_id4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->anch_id4.size + 1);
  // field.name range4
  {
    size_t item_size = sizeof(ros_message->range4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DecaRange__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_decawave_interfaces__msg__DecaRange(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_decawave_interfaces
size_t max_serialized_size_decawave_interfaces__msg__DecaRange(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: tag_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: anch_id1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: range1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: anch_id2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: range2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: anch_id3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: range3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: anch_id4
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: range4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DecaRange__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_decawave_interfaces__msg__DecaRange(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DecaRange = {
  "decawave_interfaces::msg",
  "DecaRange",
  _DecaRange__cdr_serialize,
  _DecaRange__cdr_deserialize,
  _DecaRange__get_serialized_size,
  _DecaRange__max_serialized_size
};

static rosidl_message_type_support_t _DecaRange__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DecaRange,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, decawave_interfaces, msg, DecaRange)() {
  return &_DecaRange__type_support;
}

#if defined(__cplusplus)
}
#endif
