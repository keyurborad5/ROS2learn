#pragma once
#include <rclcpp/rclcpp.hpp>
#include <memory.h>
#include <std_msgs/msg/bool.hpp>

//Create namespace
namespace demo{
    class LightSwitcherSub : public rclcpp::Node{

        public:
        //creating constructor
        LightSwitcherSub(std::string node_name):Node(node_name){
            subscriber_=this->create_subscription<std_msgs::msg::Bool>("light_status",10, std::bind(&LightSwitcherSub::light_status_sub_cb,this, std::placeholders::_1));

        }
        private:
        rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr subscriber_;
        void light_status_sub_cb(const std_msgs::msg::Bool::SharedPtr msg);

    };
}