#include <cstdlib>
#include <iostream>


int getValueFromUserUB()
{
    int val{};
    std::cin >> val;

    // no return
}


int main()
{
    int num{getValueFromUserUB()};
    std::cout << num << std::endl;

    // return EXIT_SUCCESS; // will auto return 0
}