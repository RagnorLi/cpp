#include <cstdlib>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

#include <iostream>

int getUserInput()
{
    PLOGD << "getUserInput() Called"; 

    std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
    plog::init(plog::debug, "Logfile.txt");
    PLOGD << "main() called";
    int x{ getUserInput() };
	std::cout << "You entered: " << x << '\n';
    return EXIT_SUCCESS;
}

// 防御性编程就是写代码的时候提前考虑各种可能出错的情况，比如用户输错数据、文件找不到、网络断开等等，提前检查处理，避免程序崩溃或出错，让软件更稳更可靠。说白了，就是“把事情想糙点，能出错的都防着点”。