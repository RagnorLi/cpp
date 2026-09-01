#include <iostream>


void different_cin_type(){
    int ips{};

    std::cin >> ips;
    std::cout << "the value you input is: " << ips << std::endl;
}


void print_three_numbers()
{
    int a{};
    int b{};
    int c{};

    std::cout << "Enter three numbers: " << std::endl;

    // std::cin >> a;
    // std::cin >> b;
    // std::cin >> c;

    // 原来可以这样
    std::cin >> a >> b >> c;

    std::cout << "You entered" << a << "," << b << ", and" << c << std::endl;


}

int main()
{
    // different_cin_type();
    print_three_numbers();
    return 0;
}

// h -> 0
// 3.2 -> 3
// -3 -> -3
// Hello -> 0
// 30 0000 0000 -> 2147483647
// 123abc -> 123
// abc123 -> 0
//    +5 -> 5
// 5b6 -> 5


