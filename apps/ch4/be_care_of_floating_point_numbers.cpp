/*
关于浮点数，记住2点

1、浮点数对于存储非常大或非常小的数字非常有用，包括带有小数部分的数字。
2、浮点数常常会有微笑的舍入误差，即使数字的有效位数少于精度时也是如此。很多时候这些误差因为太小而被忽略，并且因为数字在输出时会被截断。然而，对浮点数进行比较可能不会得到预期的结果。对这些值进行数学运算会使舍入误差逐渐增大。

*/

#include <iomanip>
#include <iostream>


int main()
{
    std::cout << std::setprecision(17);

    double d1{1.0};
    std::cout << d1 << std::endl;

    // should equal 1.0
    double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
    std::cout << d2 << std::endl;

    return 0;

}