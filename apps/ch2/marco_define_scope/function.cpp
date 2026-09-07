#include <iostream>
#include "function.h"

void doSomething()
{
#ifdef PRINT
    std::cout << "输出" << std::endl;
#endif

#ifndef PRINT
    std::cout << "不输出" << std::endl;  // 尽管 PRINT 在 main.cpp 中被定义了，但这并不会影响到 function.cpp 中的任何代码（PRINT 的生效范围仅限于 main.cpp 的定义位置到文件末尾）
#endif
}