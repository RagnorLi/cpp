#include <ios>
#include <iostream>

int main()
{   
    // 通常
    bool a{true};
    bool b{false};
    bool c{}; // default to false

    // ① 使用统一初始化的时候，可以使用
    bool bFalse{0}; // ok : initialized to false
    bool bTrue{1};  // ok : initialized to true
    #if 0
    bool bNo{2};  // error: narrow conversions disallowd
    #endif

    // ② 拷贝初始化：允许整数隐式转换为 bool（非零为 true，零为 false）
    std::cout << std::boolalpha;  // print bools as true or false

    bool b1 = 4;  
    std::cout << b1 << std::endl;

    bool b2 = 0;
    std::cout << b2 << std::endl;

    return 0;
}