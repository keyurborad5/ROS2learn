#pragma once
#include "av_msgs/msg/vehicle_status.hpp"
#include "rclcpp/rclcpp.hpp"
#include<memory.h>

namespace automated_vehicle{
    class Vehicle : public rclcpp::Node{
        public:
        //constructor
        Vehicle(std::string node_name): Node(node_name){
            vehicle_publisher_=this->create_publisher<av_msgs::msg::VehicleStatus>("vehicle_status",10);

        }

        private:
        rclcpp::Publisher<av_msgs::msg::VehicleStatus>::SharedPtr vehicle_publisher_;

    };
}
