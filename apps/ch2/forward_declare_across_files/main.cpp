#include <cstdlib>
#include <iostream>

/*
1、C++的设计理念是：每个源文件都可以独立编译，无需了解其他文件的内容。因此，文件的实际编译顺序并不重要。
2、当我们开始学习面向对象编程后，会经常需要处理多个文件。所以，现在正是确保你了解如何处理多个文件的相关操作的绝佳时机。
3、提醒：每当你创建一个新的代码文件（.cpp 格式）时，都需要将其添加到项目中，这样才能进行编译。

*/
int getInputs();

int main()
{
    int x{getInputs()};
    int y{getInputs()};

    std::cout << "x: " << x << "y" << y << std::endl;
    return EXIT_SUCCESS;
}