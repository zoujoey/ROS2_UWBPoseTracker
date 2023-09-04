// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice
#include "decawave_interfaces/msg/detail/deca_range__rosidl_typesupport_fastrtps_cpp.hpp"
#include "decawave_interfaces/msg/detail/deca_range__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace decawave_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_decawave_interfaces
cdr_serialize(
  const decawave_interfaces::msg::DecaRange & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: tag_id
  cdr << ros_message.tag_id;
  // Member: anch_id1
  cdr << ros_message.anch_id1;
  // Member: range1
  cdr << ros_message.range1;
  // Member: anch_id2
  cdr << ros_message.anch_id2;
  // Member: range2
  cdr << ros_message.range2;
  // Member: anch_id3
  cdr << ros_message.anch_id3;
  // Member: range3
  cdr << ros_message.range3;
  // Member: anch_id4
  cdr << ros_message.anch_id4;
  // Member: range4
  cdr << ros_message.range4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_decawave_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  decawave_interfaces::msg::DecaRange & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: tag_id
  cdr >> ros_message.tag_id;

  // Member: anch_id1
  cdr >> ros_message.anch_id1;

  // Member: range1
  cdr >> ros_message.range1;

  // Member: anch_id2
  cdr >> ros_message.anch_id2;

  // Member: range2
  cdr >> ros_message.range2;

  // Member: anch_id3
  cdr >> ros_message.anch_id3;

  // Member: range3
  cdr >> ros_message.range3;

  // Member: anch_id4
  cdr >> ros_message.anch_id4;

  // Member: range4
  cdr >> ros_message.range4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_decawave_interfaces
get_serialized_size(
  const decawave_interfaces::msg::DecaRange & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: tag_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tag_id.size() + 1);
  // Member: anch_id1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.anch_id1.size() + 1);
  // Member: range1
  {
    size_t item_size = sizeof(ros_message.range1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: anch_id2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.anch_id2.size() + 1);
  // Member: range2
  {
    size_t item_size = sizeof(ros_message.range2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: anch_id3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.anch_id3.size() + 1);
  // Member: range3
  {
    size_t item_size = sizeof(ros_message.range3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: anch_id4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.anch_id4.size() + 1);
  // Member: range4
  {
    size_t item_size = sizeof(ros_message.range4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_decawave_interfaces
max_serialized_size_DecaRange(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: tag_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: anch_id1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: range1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: anch_id2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: range2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: anch_id3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: range3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: anch_id4
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: range4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DecaRange__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const decawave_interfaces::msg::DecaRange *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DecaRange__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<decawave_interfaces::msg::DecaRange *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DecaRange__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const decawave_interfaces::msg::DecaRange *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DecaRange__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DecaRange(full_bounded, 0);
}

static message_type_support_callbacks_t _DecaRange__callbacks = {
  "decawave_interfaces::msg",
  "DecaRange",
  _DecaRange__cdr_serialize,
  _DecaRange__cdr_deserialize,
  _DecaRange__get_serialized_size,
  _DecaRange__max_serialized_size
};

static rosidl_message_type_support_t _DecaRange__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DecaRange__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace decawave_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_decawave_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<decawave_interfaces::msg::DecaRange>()
{
  return &decawave_interfaces::msg::typesupport_fastrtps_cpp::_DecaRange__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, decawave_interfaces, msg, DecaRange)() {
  return &decawave_interfaces::msg::typesupport_fastrtps_cpp::_DecaRange__handle;
}

#ifdef __cplusplus
}
#endif
