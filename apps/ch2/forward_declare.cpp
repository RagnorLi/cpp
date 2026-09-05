/*
1. 声明用于向编译器告知某个标识符的存在以及与其相关的类型信息。  vs   定义实际上是一种声明，它用于具体实现某个标识符所代表的功能/类型（对于函数和类型而言），或者为该标识符分配具体的值/实例（对于变量而言）。
2. 为什么要前向声明？ 写前面不就行了？冗余 😠？  通常，提前声明的作用是让编译器知道某个函数的存在，而该函数实际上定义在另一个代码文件中。在这种情况下，无法重新调整代码的顺序，因为调用该函数的代码和被调用函数的代码位于完全不同的文件中！
*/

#include <iostream>

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}