// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from av_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
#define AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

#include "av_msgs/msg/detail/vehicle_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const av_msgs::msg::VehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: driving_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_type: ";
    value_to_yaml(msg.driving_type, out);
    out << "\n";
  }

  // member: current_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_action: ";
    value_to_yaml(msg.current_action, out);
    out << "\n";
  }

  // member: current_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_speed: ";
    value_to_yaml(msg.current_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const av_msgs::msg::VehicleStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<av_msgs::msg::VehicleStatus>()
{
  return "av_msgs::msg::VehicleStatus";
}

template<>
inline const char * name<av_msgs::msg::VehicleStatus>()
{
  return "av_msgs/msg/VehicleStatus";
}

template<>
struct has_fixed_size<av_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<av_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<av_msgs::msg::VehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AV_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
