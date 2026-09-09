#include <cstdlib>
#include <iostream>

int main()
{   
    // 使用整数除法时要小心，因为你会丢失商的任何小数部分。然而，如果这正是你想要的，整数除法可以安全使用，因为结果是可预测的。
    std::cout << 8 / 4 << std::endl;
    std::cout << 8 / 5 << std::endl;
    std::cout << 8 / 6 << std::endl;
    return EXIT_SUCCESS;
}