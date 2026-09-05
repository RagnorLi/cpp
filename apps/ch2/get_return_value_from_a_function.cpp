#include <cstdlib>
#include <iostream>

int getValueFromUser()  // this function now returns an int value
{   
    int val{};
    std::cin >> val;
    return val;
}

int main()
{
    int num{getValueFromUser()};  // initialization num from the function by calling once

    std::cout << num << std::endl;
    
    return EXIT_SUCCESS;

}