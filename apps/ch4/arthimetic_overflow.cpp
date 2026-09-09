#include <iostream>

int main()
{   
    int x{2'147'483'647}; // the maximum value of a 4-bytes signed integer;int类型通常是32位，范围是 -2,147,483,648 到 2,147,483,647
    std::cout << x << std::endl;

    x = x + 1;  // integer overflow, undefined behavior
    std::cout << x << '\n';

    return 0;
}