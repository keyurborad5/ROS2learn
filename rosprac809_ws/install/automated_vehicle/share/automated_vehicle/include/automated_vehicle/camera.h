#pragma once
#include<rclcpp/rclcpp.hpp>
#include<sensor_msgs/msg/image.hpp>
#include <memory.h>
#include <rcl_interfaces/msg/set_parameters_result.hpp>

//Creating namespace
namespace automated_vehicle{
    //creating class
    class Camera : public rclcpp::Node{
        public:
        //creating constructor
        Camera(std::string node_name): Node(node_name){
            camera_publisher_ = this->create_publisher<sensor_msgs::msg::Image>("image",10);
            timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&automated_vehicle::Camera::camera_pub_data_cb, this));

        }
        private:
        rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr camera_publisher_;
        rclcpp::TimerBase::SharedPtr timer_;

        void camera_pub_data_cb();

    };//class camera
}// namespace automated_vehicle

