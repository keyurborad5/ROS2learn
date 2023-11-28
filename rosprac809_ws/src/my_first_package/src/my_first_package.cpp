#include <rclcpp/rclcpp.hpp>
#include<memory.h>
#include "my_first_package.h"
int main(int argc, char** argv){
    rclcpp::init(argc,argv);
    auto node = std::make_shared<demo::MyFirstPackage>("hello");
    //std::cout<<node->get_namespace()<<'\n'<<node->get_name()<<'\n'<<node->get_sub_namespace();
    rclcpp::spin(node);
    rclcpp::shutdown();

}