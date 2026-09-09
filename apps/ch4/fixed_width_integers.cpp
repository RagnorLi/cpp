// 当你需要一个具有保证范围的整数类型时，请使用固定宽度整数类型。

#include <cstdint>  // for fixed-width integers
#include <iostream>

int main()
{   
    std::cout << std::numeric_limits<std::int32_t>::min() << " ~ " << std::numeric_limits<std::int32_t>::max() << std::endl;
    std::int32_t x {32767};  // x is always a 32-bit interger
    x = x + 1;
    std::cout << x << std::endl;


    // 📢  std::int8_t 和 std::uint8_t 通常表现得像字符类型
    std::int8_t x_t { 65 };   // initialize 8-bit integral type with value 65
    std::cout << x_t << '\n'; // You're probably expecting this to print 65

    return 0;
}