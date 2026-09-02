#include <iostream>


void case_1_see_uninitialized_variable()
{
    // define an integer variable but uninitialized
    int x;

    // 📢 you need to make compile release mode 
    std::cout << x << std::endl;  // who knows what we will get, because x is uninitialized 
}

void doNothing(int&){} // int&(类型里)：引用，别名，可用来改原变量  VS  &x(表达式里) 取x的地址，得到int*
void case_2_if_1_cant_compiler_using_getAddress_make_compiler_think_we_assign_value_to_this_variable1()
{
    int x;
    doNothing(x);
    std::cout << x << std::endl;  // always 0 because of Apple Clang decide to give release version uninitialized 0
}

void case_3_undefined_behavior()
{
    std::cout << "case1 & case2 perform undefined behavior" << std::endl;
    // 💣导致未定义行为的代码可能会表现出以下任何一种症状：

    // 1. 你的程序每次运行时都会产生不同的结果。
    // 2. 你的程序总是产生相同的错误结果。
    // 3. 你的程序表现不稳定（有时能得到正确结果，有时则不能）。
    // 4. 你的程序看起来运行正常，但在后续的执行过程中产生了错误的结果。
    // 5. 你的程序会崩溃，要么是立即崩溃，要么是稍后崩溃。
    // 6. 你的程序在某些编译器上可以运行，但在其他编译器上则无法运行。
    // 7. 在你的程序中，只要不修改那些看似毫无关联的代码，程序就能正常运行。
    // 8. 或者，你的代码实际上仍然可能会产生正确的结果。
}

void case_4_implecement_define_behavior()
{
    /*
    特定的编译器以及其所附带的标准化库，共同构成了该语言的实现方式（因为正是这些组件真正实现了 C++语言的功能）。
    在某些情况下，C++语言标准允许实现方自行决定语言的某些具体行为方式，这样编译器就可以选择出最适合特定平台的实现方式。
    由实现方决定的行为方式被称为“实现定义的行为”。
    对于任何一种实现方式来说，这种实现定义的行为都必须有明确的文档说明，并且保持一致性。
    */
    std::cout << sizeof(int) << '\n';  // 4 or 2?
}

void case_5_unspecified_behavior()
{
    /*
    “未明确指定的行为”与“实现定义的行为”几乎相同：这两种情况都是由具体实现来决定其行为方式，但实现方无需对这种行为方式进行记录或说明。
    */
}


int main()
{   
    case_1_see_uninitialized_variable();
    case_2_if_1_cant_compiler_using_getAddress_make_compiler_think_we_assign_value_to_this_variable1();

    return 0;
}
