#include <cstdlib>
#include <iostream>

int getValueFromUser()
{
    int input{};
    std::cin >> input;

    return input;  // return the input back to the caller .  按值返回会将一个临时对象（其中包含返回值的副本）返回给调用者。
}

int main()
{

    std::cout << getValueFromUser() << std::endl;  // where does the returned value get stored

    return EXIT_SUCCESS;
}

