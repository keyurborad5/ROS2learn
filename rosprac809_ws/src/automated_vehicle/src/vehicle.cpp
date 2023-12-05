#include"vehicle.h"
#include<rclcpp/rclcpp.hpp>

int main(int argc, char** argv){
    rclcpp::init(argc,argv);
    auto node = std::make_shared<automated_vehicle::Vehicle>("vehicle");
    rclcpp::spin(node);
    rclcpp::shutdown();
}