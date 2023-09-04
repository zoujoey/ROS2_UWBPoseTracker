// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__decawave_interfaces__msg__DecaRange __attribute__((deprecated))
#else
# define DEPRECATED__decawave_interfaces__msg__DecaRange __declspec(deprecated)
#endif

namespace decawave_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DecaRange_
{
  using Type = DecaRange_<ContainerAllocator>;

  explicit DecaRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag_id = "";
      this->anch_id1 = "";
      this->range1 = 0.0f;
      this->anch_id2 = "";
      this->range2 = 0.0f;
      this->anch_id3 = "";
      this->range3 = 0.0f;
      this->anch_id4 = "";
      this->range4 = 0.0f;
    }
  }

  explicit DecaRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    tag_id(_alloc),
    anch_id1(_alloc),
    anch_id2(_alloc),
    anch_id3(_alloc),
    anch_id4(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag_id = "";
      this->anch_id1 = "";
      this->range1 = 0.0f;
      this->anch_id2 = "";
      this->range2 = 0.0f;
      this->anch_id3 = "";
      this->range3 = 0.0f;
      this->anch_id4 = "";
      this->range4 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tag_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tag_id_type tag_id;
  using _anch_id1_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _anch_id1_type anch_id1;
  using _range1_type =
    float;
  _range1_type range1;
  using _anch_id2_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _anch_id2_type anch_id2;
  using _range2_type =
    float;
  _range2_type range2;
  using _anch_id3_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _anch_id3_type anch_id3;
  using _range3_type =
    float;
  _range3_type range3;
  using _anch_id4_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _anch_id4_type anch_id4;
  using _range4_type =
    float;
  _range4_type range4;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tag_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tag_id = _arg;
    return *this;
  }
  Type & set__anch_id1(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->anch_id1 = _arg;
    return *this;
  }
  Type & set__range1(
    const float & _arg)
  {
    this->range1 = _arg;
    return *this;
  }
  Type & set__anch_id2(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->anch_id2 = _arg;
    return *this;
  }
  Type & set__range2(
    const float & _arg)
  {
    this->range2 = _arg;
    return *this;
  }
  Type & set__anch_id3(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->anch_id3 = _arg;
    return *this;
  }
  Type & set__range3(
    const float & _arg)
  {
    this->range3 = _arg;
    return *this;
  }
  Type & set__anch_id4(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->anch_id4 = _arg;
    return *this;
  }
  Type & set__range4(
    const float & _arg)
  {
    this->range4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    decawave_interfaces::msg::DecaRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const decawave_interfaces::msg::DecaRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      decawave_interfaces::msg::DecaRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      decawave_interfaces::msg::DecaRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__decawave_interfaces__msg__DecaRange
    std::shared_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__decawave_interfaces__msg__DecaRange
    std::shared_ptr<decawave_interfaces::msg::DecaRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DecaRange_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tag_id != other.tag_id) {
      return false;
    }
    if (this->anch_id1 != other.anch_id1) {
      return false;
    }
    if (this->range1 != other.range1) {
      return false;
    }
    if (this->anch_id2 != other.anch_id2) {
      return false;
    }
    if (this->range2 != other.range2) {
      return false;
    }
    if (this->anch_id3 != other.anch_id3) {
      return false;
    }
    if (this->range3 != other.range3) {
      return false;
    }
    if (this->anch_id4 != other.anch_id4) {
      return false;
    }
    if (this->range4 != other.range4) {
      return false;
    }
    return true;
  }
  bool operator!=(const DecaRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DecaRange_

// alias to use template instance with default allocator
using DecaRange =
  decawave_interfaces::msg::DecaRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace decawave_interfaces

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__STRUCT_HPP_
