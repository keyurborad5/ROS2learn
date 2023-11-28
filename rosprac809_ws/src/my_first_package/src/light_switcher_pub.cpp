#include "light_switcher_pub.h"
#include<memory.h>

#include<rclcpp/rclcpp.hpp>

int main( int argc, char** argv){
    rclcpp::init(argc,argv);
    auto node=std::make_shared<demo::LightSwitcherPub>("light_switcher_pub");
    rclcpp::spin(node);
    rclcpp::shutdown();
}