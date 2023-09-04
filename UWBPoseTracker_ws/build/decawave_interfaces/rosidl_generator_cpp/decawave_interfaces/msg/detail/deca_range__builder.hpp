// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_

#include "decawave_interfaces/msg/detail/deca_range__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace decawave_interfaces
{

namespace msg
{

namespace builder
{

class Init_DecaRange_range4
{
public:
  explicit Init_DecaRange_range4(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  ::decawave_interfaces::msg::DecaRange range4(::decawave_interfaces::msg::DecaRange::_range4_type arg)
  {
    msg_.range4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_anch_id4
{
public:
  explicit Init_DecaRange_anch_id4(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_range4 anch_id4(::decawave_interfaces::msg::DecaRange::_anch_id4_type arg)
  {
    msg_.anch_id4 = std::move(arg);
    return Init_DecaRange_range4(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_range3
{
public:
  explicit Init_DecaRange_range3(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_anch_id4 range3(::decawave_interfaces::msg::DecaRange::_range3_type arg)
  {
    msg_.range3 = std::move(arg);
    return Init_DecaRange_anch_id4(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_anch_id3
{
public:
  explicit Init_DecaRange_anch_id3(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_range3 anch_id3(::decawave_interfaces::msg::DecaRange::_anch_id3_type arg)
  {
    msg_.anch_id3 = std::move(arg);
    return Init_DecaRange_range3(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_range2
{
public:
  explicit Init_DecaRange_range2(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_anch_id3 range2(::decawave_interfaces::msg::DecaRange::_range2_type arg)
  {
    msg_.range2 = std::move(arg);
    return Init_DecaRange_anch_id3(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_anch_id2
{
public:
  explicit Init_DecaRange_anch_id2(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_range2 anch_id2(::decawave_interfaces::msg::DecaRange::_anch_id2_type arg)
  {
    msg_.anch_id2 = std::move(arg);
    return Init_DecaRange_range2(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_range1
{
public:
  explicit Init_DecaRange_range1(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_anch_id2 range1(::decawave_interfaces::msg::DecaRange::_range1_type arg)
  {
    msg_.range1 = std::move(arg);
    return Init_DecaRange_anch_id2(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_anch_id1
{
public:
  explicit Init_DecaRange_anch_id1(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_range1 anch_id1(::decawave_interfaces::msg::DecaRange::_anch_id1_type arg)
  {
    msg_.anch_id1 = std::move(arg);
    return Init_DecaRange_range1(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_tag_id
{
public:
  explicit Init_DecaRange_tag_id(::decawave_interfaces::msg::DecaRange & msg)
  : msg_(msg)
  {}
  Init_DecaRange_anch_id1 tag_id(::decawave_interfaces::msg::DecaRange::_tag_id_type arg)
  {
    msg_.tag_id = std::move(arg);
    return Init_DecaRange_anch_id1(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

class Init_DecaRange_header
{
public:
  Init_DecaRange_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DecaRange_tag_id header(::decawave_interfaces::msg::DecaRange::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DecaRange_tag_id(msg_);
  }

private:
  ::decawave_interfaces::msg::DecaRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::decawave_interfaces::msg::DecaRange>()
{
  return decawave_interfaces::msg::builder::Init_DecaRange_header();
}

}  // namespace decawave_interfaces

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__BUILDER_HPP_
