#include <iostream>

// int main()
// {
//     void sayHello()  // this function is not allowed here
//     {
//         std::cout <<  "hello world" << std::endl;
//     }

//     sayHello();
//     return 0;
// }



void sayHello()  // no longer insider of main()
{
    std::cout <<  "hello world" << std::endl;
}

int main()
{
    sayHello();
    return 0;
}