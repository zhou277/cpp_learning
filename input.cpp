#include <iostream>
#include <cmath>

int main()
{
    double angle;

    std::cout << "请输入关节角度：";

    // 1. 检查输入是否成功
    if (!(std::cin >> angle))
    {
        std::cerr << "错误：输入格式不正确！" << std::endl;
        return 1;
    }

    // 2. 检查是否为有限数值
    if (!std::isfinite(angle))
    {
        std::cerr << "错误：输入不是有限数值！" << std::endl;
        return 1;
    }

    // 3. 检查是否在允许范围内
    if (angle < -1.5 || angle > 1.5)
    {
        std::cerr << "错误：角度超出限制范围 [-1.5, 1.5]！" << std::endl;
        return 1;
    }

    // 4. 输入合法
    std::cout << "输入成功，角度为：" << angle << std::endl;

    return 0;
}