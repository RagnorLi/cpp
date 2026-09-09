// an n-bit signed variable has a range of -(2ⁿ⁻¹) to (2ⁿ⁻¹) - 1
#include <iostream>
#include <limits>

int main() {
    // 你可以用 std::numeric_limits<T>::min() / ::max() 来查看 T 类型的取值范围
    // 是的，short 实际上是 short int，long 就是 long int，long long 就是 long long int，int 可以省略
    std::cout << "short (也就是 short int) 类型的取值范围: [" 
              << std::numeric_limits<short>::min() << ", " 
              << std::numeric_limits<short>::max() << "]" << std::endl;

    std::cout << "int 类型的取值范围: [" 
              << std::numeric_limits<int>::min() << ", " 
              << std::numeric_limits<int>::max() << "]" << std::endl;
    
    std::cout << "long (也就是 long int) 类型的取值范围: [" 
              << std::numeric_limits<long>::min() << ", " 
              << std::numeric_limits<long>::max() << "]" << std::endl;
              
    std::cout << "long long (也就是 long long int) 类型的取值范围: [" 
              << std::numeric_limits<long long>::min() << ", " 
              << std::numeric_limits<long long>::max() << "]" << std::endl;
    // 事实上，带 int/不带 int 都可以，效果一样
      
    // 其他类型类似
    return 0;
}