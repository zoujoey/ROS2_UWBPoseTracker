// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from decawave_interfaces:msg/DecaRange.idl
// generated code does not contain a copyright notice

#ifndef DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__TRAITS_HPP_
#define DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__TRAITS_HPP_

#include "decawave_interfaces/msg/detail/deca_range__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<decawave_interfaces::msg::DecaRange>()
{
  return "decawave_interfaces::msg::DecaRange";
}

template<>
inline const char * name<decawave_interfaces::msg::DecaRange>()
{
  return "decawave_interfaces/msg/DecaRange";
}

template<>
struct has_fixed_size<decawave_interfaces::msg::DecaRange>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<decawave_interfaces::msg::DecaRange>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<decawave_interfaces::msg::DecaRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DECAWAVE_INTERFACES__MSG__DETAIL__DECA_RANGE__TRAITS_HPP_
