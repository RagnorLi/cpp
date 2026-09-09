// 该程序从用户处读取两个单独的整数，将它们相加，然后输出结果
#include <cstdlib>

// int readNumber();
// void writeAnswer(int num);
#include "io.h"

int main(){
    
    int a{readNumber()};
    int b{readNumber()};

    writeAnswer(a + b);

    return EXIT_SUCCESS;
}