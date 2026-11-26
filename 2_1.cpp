#include <iostream>
void reset_copy(double value1) { value1 = 0.0; std::cout << value1 << '\n'; }
void reset_ref(double& value) { value = 0.0; }
int main() {
    double angle{0.4};
    reset_copy(angle);
    std::cout << angle << '\n';
    reset_ref(angle);
    std::cout << angle << '\n';
}