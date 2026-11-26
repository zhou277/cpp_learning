#include <iostream>
#include <string>
#include <array>

int main(){
    const std::string robot_name{"dual_arm"};
    const int joints_per_arm{6};
    double left_joint_rad{0.25};
    double right_joint_rad{0.25};
    std::array<double, 6> left_joints_rad={0.0 ,0.0 ,0.0 ,0.0 ,0.0 ,0.0};
    std::array<double, 6> right_joints_rad={0.0 ,0.0 ,0.0 ,0.0 ,0.0 ,0.0};

    const bool left_ready{true};
    const bool right_ready{false};

    left_joint_rad = 0.30;

    std::cout << "Robot name: " << robot_name << "\n"
              << "Joints per arm: " << joints_per_arm << "\n"
              << "Left joint rad: " << left_joint_rad << "\n"
              << "Right joint rad: " << right_joint_rad << "\n"
              << "Left ready: " << std::boolalpha << left_ready << "\n"
              << "Right ready: " << std::boolalpha << right_ready << "\n";
    
    return 0;
}