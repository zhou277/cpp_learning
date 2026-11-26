#include <iostream>
#include <string>
#include <array>
#include <vector>

const double MIN_ANGLE = -1.5;
const double MAX_ANGLE = 1.5;

std::array<std::string,6> joint_name = {
    "joint 1",
    "joint 2",
    "joint 3",
    "joint 4",
    "joint 5",
    "joint 6"
};

enum class arm_state {OK, not_ready, idle, busy};

struct Arm {
    std::string name;
    arm_state state;
    std::array<double,6> jointangles;
    std::array<std::string,6> jointnames = joint_name;
};

int checkArm(const Arm& arm)
{
    int error_count = 0;
    for (std::size_t i = 0; i < arm.jointangles.size(); ++i){
        if (arm.jointangles[i] < MIN_ANGLE || arm.jointangles[i] > MAX_ANGLE){
            std::cout << arm.jointnames[i] << " is out of range" << std::endl;
            error_count += 1;
        }
    }
    return  error_count;
}

int main()
{
    std::array<double, 6> left_angles = {
        0, 0, 0, 0, 0, 0
    };

    std::array<double, 6> right_angles = {
        0, 0, 0, 0, 0, 0
    };

    Arm left_arm{"left", arm_state::OK, left_angles};
    Arm right_arm{"right", arm_state::not_ready, right_angles};

    int left_errors = checkArm(left_arm);
    int right_errors = checkArm(right_arm);
    int total_errors = left_errors + right_errors;

    std::cout << "totalerror is "
              << total_errors
              << std::endl;

    std::vector<double> empty_angles;
    
    if (empty_angles.empty()){
        std::cout << "empty_angles is empty" << std::endl;
    }
}