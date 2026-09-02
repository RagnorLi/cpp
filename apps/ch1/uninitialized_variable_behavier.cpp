#include <iostream>

int main()
{   
    // define an integer variable but uninitialized
    int x;

    // 📢 you need to make compile release mode 
    std::cout << x << std::endl;  // who knows what we will get, because x is uninitialized  
    return 0;
}