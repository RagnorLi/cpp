#include <iostream>

void print(int x)
{
    std::cout << x << std::endl;
}


int main()
{
    print(static_cast<int>(5.5));  // explicity convert double value 5.5 to an int

    return 0;
}