from launch import LaunchDescription
from launch_ros.actions import Node
# This function is needed
def generate_launch_description():
    ld = LaunchDescription()
    publisher = Node(
        package="my_first_package",
        executable="light_switcher_pub"
    )
    subscriber = Node(
        package="my_first_package",
        executable="light_switcher_sub"
    )
    ld.add_action(publisher)
    ld.add_action(subscriber)
    return ld