#include <iostream>
// 除了用于定义函数体外，大括号在C++中还有以下常见用法：

// 1. 作为单独的作用域（scope block）
void demo_scope_block()
{
    int a = 10;
    {
        int b = 20; // b只在这个block内可见
        std::cout << "Inside block, a = " << a << ", b = " << b << std::endl;
    }
    // std::cout << b; // 错误，b已经不在作用域内
}

// 2. 用于结构体、类、枚举（类型声明和定义）
struct MyStruct {
    int x;
    int y;
};

enum Color { Red, Green, Blue };

class MyClass {
public:
    void print() { std::cout << "Hello from MyClass\n"; }
};

// 3. 用于初始化列表（uniform initialization）
void demo_initialization()
{
    int arr[3] = {1, 2, 3}; // 初始化数组
    MyStruct s{4, 5};       // 初始化结构体
    std::cout << "arr[0]: " << arr[0] << ", s.x: " << s.x << std::endl;
}

// 4. 用于if、for、while等控制结构体语句块
void demo_control_structures()
{
    for (int i = 0; i < 3; ++i) {
        std::cout << "i = " << i << std::endl;
    }

    if (int temp = 5; temp > 3) {
        std::cout << "temp > 3" << std::endl;
    }
}


int main()
{
    demo_scope_block();
    demo_initialization();
    demo_control_structures();

    MyClass obj;
    obj.print();

    return 0;
}



