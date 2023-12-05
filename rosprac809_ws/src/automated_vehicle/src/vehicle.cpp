#include"vehicle.h"
#include<rclcpp/rclcpp.hpp>

void automated_vehicle::Vehicle::vehicle_pub_data_cb(){
    av_msgs::msg::VehicleStatus message;
    message.driving_type= av_msgs::msg::VehicleStatus::AUTONOMOUS;
    message.current_action= av_msgs::msg::VehicleStatus::STOPPED;
    message.current_speed= 1.0;
    vehicle_publisher_->publish(message);
    RCLCPP_INFO_STREAM(this->get_logger(),"printing");
}

int main(int argc, char** argv){
    rclcpp::init(argc,argv);
    auto node = std::make_shared<automated_vehicle::Vehicle>("vehicle");
    rclcpp::spin(node);
    rclcpp::shutdown();
}