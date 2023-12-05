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
            timer_ = this->create_wall_timer(std::chrono::milliseconds(100),std::bind(&automated_vehicle::Vehicle::vehicle_pub_data_cb,this));

        }

        private:
        rclcpp::Publisher<av_msgs::msg::VehicleStatus>::SharedPtr vehicle_publisher_;
        rclcpp::TimerBase::SharedPtr timer_;

        void vehicle_pub_data_cb();

    };
}
