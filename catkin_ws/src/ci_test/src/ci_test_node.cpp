#include "ros/ros.h"

int main(int argc, char** argv){
    ros::init(argc, argv, "ci_test_node");
    std::cout << "Hello Ros!" << std::endl;
    return 0;
}