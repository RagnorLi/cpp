#include <iostream>
#include <cstdlib>

double get_double_value()
{
    std::cout << "Enter a double value: " << std::endl;
    double a{};
    std::cin >> a;
    return a;
}

// 下面2个可以合并的，我不合了
bool op_isvalid(char op)
{
    return op == '+' || op == '-' || op == '*' || op == '/';
}

double get_result(double a, double b, char op)
{
    if(! op_isvalid(op))
        return EXIT_FAILURE;

    if(op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else 
        return a / b;   

}


int main()
{
    double num1{get_double_value()};
    double num2{get_double_value()};

    std::cout << "Enter +, -, *, or /: " << std::endl;
    char op{};
    std::cin >> op;

    std::cout << num1 << op << num2 << " is: " << get_result(num1, num2, op) << std::endl;

    return EXIT_SUCCESS;
}