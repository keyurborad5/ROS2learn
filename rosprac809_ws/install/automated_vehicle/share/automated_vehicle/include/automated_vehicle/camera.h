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
            //declaring node parameter
            this->declare_parameter("message_height", 1080);
            this->declare_parameter("message_width",640);
            this->declare_parameter("message_encoding","RGB8");
            this->declare_parameter("name","camera");
            this->declare_parameter("interval", 1000);

            //Retriving node parameter by making them as attribute
            message_height_=this->get_parameter("message_height").as_int();
            message_width_=this->get_parameter("message_width").as_int();
            message_encoding_=this->get_parameter("message_encoding").as_string();
            name_=this->get_parameter("name").as_string();
            interval_=this->get_parameter("interval").as_int();

            camera_publisher_ = this->create_publisher<sensor_msgs::msg::Image>("image",10);
            timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&automated_vehicle::Camera::camera_pub_data_cb, this));

        }
        private:
        rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr camera_publisher_;
        rclcpp::TimerBase::SharedPtr timer_;
        //aatributes of parameters
        unsigned message_height_;
        unsigned message_width_;
        std::string message_encoding_;
        std::string name_;
        unsigned interval_;

        void camera_pub_data_cb();

    };//class camera
}// namespace automated_vehicle

