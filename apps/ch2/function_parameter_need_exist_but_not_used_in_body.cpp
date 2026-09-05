#include <cstdlib>
#include <iostream>

struct Base {
    virtual void onEvent(int code) {}
};

struct Derived : public Base {
    void onEvent(int /*code*/) override {  // google style for comment what the unnamed parameters was
        std::cout << "事件发生，我并不关心code的具体值。" << std::endl;
    }
};

int main()
{
    Derived d1;          // 直接定义Derived类型的对象
    d1.onEvent(7788);     // 调用onEvent方法，传入任意int参数
    
    return EXIT_SUCCESS;
}


/*
哈哈，作者想到了你可能会好奇，为什么我们要编写一个包含某个参数的函数，而这个参数的值却根本不会被使用到。这种情况最常出现在类似以下的情形中：

1、假设我们有一个只有一个参数的函数。后来，该函数被修改了，而该参数已经不再被需要了。
如果直接删除这个不再被使用的参数，那么该函数的所有现有调用都会出错（因为调用时提供的参数数量超出了函数所能接受的限度）。
这就意味着我们必须找到该函数的所有调用点，然后删除那些不再需要的参数。这可能是一项相当繁琐的工作，还需要进行大量的测试。
此外，在我们无法控制所有调用该函数的代码的情况下，这种做法可能根本不可行。
因此，我们可以选择保持该参数不变，让它不执行任何操作。

2、比如 C++ 里的运算符重载，像 ++ 和 -- 这样的操作符有前缀（比如 ++foo）和后缀（比如 foo++）两种写法。为了区分它们，C++ 规定重载后缀形式的时候需要加一个 int 类型的占位参数，而前缀形式没有这个参数。这个 int 参数在函数体里其实不会用到，只是用来让编译器区分不同的重载版本。所以有时候你会看到函数参数写着 int，但函数体里根本不用它。

3、当我们需要根据类型模板参数的类型来判定某些事情时（而不是根据其具体的值）。

*/