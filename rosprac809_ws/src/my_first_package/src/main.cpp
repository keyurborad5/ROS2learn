#include <rclcpp/rclcpp.hpp>
#include<memory.h>
int main(int argc, char** argv){
    rclcpp::init(argc,argv);
    auto node = std::make_shared<rclcpp::Node>("hello","keyurname");
    RCLCPP_INFO_STREAM(node->get_logger(), "Hello Keyur Borad");
    std::cout<<node->get_namespace()<<'\n'<<node->get_name()<<'\n'<<node->get_sub_namespace();
    rclcpp::spin(node);
    rclcpp::shutdown();

}