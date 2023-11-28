#pragma once
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <memory.h>
//#include <functional.hpp>
//Create namespace
namespace demo{
    //create class
    class LightSwitcherPub : public rclcpp::Node{
        public:
        //creating constructor
        LightSwitcherPub(std::string node_name): Node(node_name){
            //initiating attribute publisher_
            publisher_ =this->create_publisher<std_msgs::msg::Bool>("light_status", 1); //creating publisher with msg type bool and ( topic , buffer size)
            timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&LightSwitcherPub::light_status_timer_cb, this));
            
        }
        private:
        //Creating an attribute named publisher_ of type shown below
        rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr publisher_;

        rclcpp::TimerBase::SharedPtr timer_;

        void light_status_timer_cb();

    };// Class LightSwitcherPub
}// namespace demo