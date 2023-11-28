#pragma once
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>

//Create namespace
namespace demo{
    //create class
    class LightSwitcherPub : public rclcpp::Node{
        public:
        //creating constructor
        LightSwitcherPub(std::string node_name): Node(node_name){
            publisher_ =this->create_publisher<std_msgs::msg::Bool>("light_status", 1); //creating publisher with msg type bool and ( topic , buffer size)
            std_msgs::msg::Bool message;
            message.data = true;
            publisher_->publish(message);
            RCLCPP_INFO_STREAM(this->get_logger(),"Light Status :"<< message.data);
        }
        private:
        rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr publisher_;

    };// Class LightSwitcherPub
}// namespace demo