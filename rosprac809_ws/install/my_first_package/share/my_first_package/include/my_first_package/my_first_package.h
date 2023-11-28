#pragma once
#include <rclcpp/rclcpp.hpp>
/**
 * @brief  namespace demo
 * 
 */
namespace demo{
    /**
     * @brief class MyFirstPackage inheriting public of rclcpp::Node class
     * 
     */
    class MyFirstPackage : public rclcpp::Node{
        public:
        // Creating constructor
        MyFirstPackage(std::string node_name): Node(node_name){
            RCLCPP_INFO_STREAM(this->get_logger(),"Helloo Keyyur");
        }

    }; //class MyFirstPackage
}// namespace demo