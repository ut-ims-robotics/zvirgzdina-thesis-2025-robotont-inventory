from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robina_thesis',
            executable='marker_publisher',
            name='marker_publisher',
            output='screen'
        )
    ])
