/*
1. std::size_t 是某个由实现定义的无符号整数类型的别名。它在标准库中用于表示对象的字节大小或长度。
2. std::size_t 是实现定义的 unsigned 整数类型的别名。换句话说，编译器决定 std::size_t 是 unsigned int、unsigned long、unsigned long long 等等……
3. std::size_t 实际上是一个 typedef
*/

#include <cstddef>  // for std::size_t
#include <iostream>

int main()
{   
    int x{5};
    std::size_t s {sizeof(x)};
    std::cout << s << std::endl;

    return 0;
}