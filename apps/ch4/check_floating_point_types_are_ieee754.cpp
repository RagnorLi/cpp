#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>

int main()
{
    std::cout << std::setw(16) << std::boolalpha;  // print bool as true or false rather than 1 or 0
    
    // 检查我的浮点类型是否与 IEEE 754兼容
    std::cout << std::setw(16) << "float: " << std::numeric_limits<float>::is_iec559 << std::endl;
    std::cout << std::setw(16) << "double: " << std::numeric_limits<double>::is_iec559 << std::endl;
    std::cout << std::setw(16) << "long double: " << std::numeric_limits<long double>::is_iec559 << std::endl;
    
    return EXIT_SUCCESS;
}



