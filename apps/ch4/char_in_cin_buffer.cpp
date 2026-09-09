#include <iostream>

int main()
{
    std::cout << "Input a keyboard character: "; // abcd without quotes  vs  a b c d with quotes

    char ch{};
    // std::cin >> ch;
    std::cin.get(ch); // extracts a, leaves " b\n" in stream
    std::cout << "you entered: "  << ch  << std::endl;

    std::cin >> ch;
    std::cin.get(ch); // extracts a, leaves " b\n" in stream
    std::cout << "you entered: "  << ch  << std::endl;

    return 0;
    
}



