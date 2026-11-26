#include <iostream>
#include <vector>

int main()
{
    int a = 10;
    int b = 20;

    int result = a + b;

    std::vector<int> values = {1, 2, 3, 4, 5};

    for (int i = 0; i < values.size(); i++)
    {
        result += values[i];
    }

    std::cout << result << std::endl;

    return 0;
}