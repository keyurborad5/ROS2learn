from launch import LaunchDescription
from launch_ros.actions import Node
# This function is needed
def generate_launch_description():
    ld = LaunchDescription()
    publisher = Node(
        package="my_first_package",
        executable="light_switcher_pub"
    )
   
    ld.add_action(publisher)
    return ld