#include <iostream>

int readNumber(){
    int num;
    std::cin >> num;
    return num;
}

void writeAnswer(int num){
    std::cout << "result is : " << num << std::endl;
}