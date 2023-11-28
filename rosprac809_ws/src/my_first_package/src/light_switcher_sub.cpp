#include"light_switcher_sub.h"
#include<rclcpp/rclcpp.hpp>

void demo::LightSwitcherSub::light_status_sub_cb(const std_msgs::msg::Bool::SharedPtr msg){
    RCLCPP_INFO_STREAM(this->get_logger(),"Received: "<<msg->data);
}

int main(int argc , char** argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<demo::LightSwitcherSub>("light_switcher_sub");
    rclcpp:spin(node);
    rclcpp::shutdown(); 
}