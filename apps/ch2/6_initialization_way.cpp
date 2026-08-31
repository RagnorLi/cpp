#include <iostream>

int main()
{   

    // ① 默认初始化 （default-initialization） : 没有初始化器，值不确定
    int a;
    // ② 拷贝初始化 （copy-initialization）: 等号
    int b = 10;
    // ③ 直接初始化 （direct-initialization）: 小括号
    int c(20);
    // ④ 直接列表初始化 （direact-list-initialization）: 花括号 - 推荐
    int d{30};
    // ⑤ 拷贝列表初始化 （copy-list-initialization）: 等号 + 花括号，少见
    int e = {40};
    // ⑥ 值初始化/ 零初始化 （value-initialization）: 空花括号 - 推荐
    int f{};

    // print
    std::cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f << std::endl;

    // —— 本质区别实验：narrowing conversion（收窄转换）—— 花括号（列表初始化）禁止收窄，小括号/等号允许（默默丢精度）
    double x = 4.5;
    int w2 = x; // ② 拷贝初始化，静默截断为4
    int w3(x);  // ③ 直接初始化，静默截断为4

    // int w4{x}; // ④ 编译错误：list-init 不允许收窄
    
    std::cout << w2 << " " << w3 << " " << std::endl;

    return 0;
}