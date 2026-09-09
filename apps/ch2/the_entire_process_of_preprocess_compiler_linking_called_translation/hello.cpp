#include <iostream>

#define TRAGET "world"

template <typename Stream>
void greet(Stream& out){
    out << "Hello, " TRAGET "!\n";  /* 这个注释会在phase3 消失*/
}

int main(){
    greet(std::cou\
t);  /* 不是打错了而是Phase2会被拼*/
}

/*
// 一次性保留编译中间文件
g++ -std=c++23 -O0 -save-temps=obj hello.cpp -o hello

| 阶段              | 这个阶段做什么                     | 执行命令                                                              | 你应该看到什么                                                        |
| ---------------   | --------------------------- | ----------------------------------------------------------------- | -------------------------------------------------------------- |
| Phase 1 字符映射    | 把源文件字节解码成字符，统一换行            | `xxd -g 1 hello.cpp | head`                                      | `23` 对应 `#`、`69` 对应 `i`；你看到的是源文件真实字节。此阶段没有独立输出文件               |
| Phase 2 行拼接     | 删除行末的反斜杠和换行                    | `grep -n 'greet(std::cout)' hello.ii`                             | 原来的两行 `std::cou\`＋`t` 已经变成一行 `std::cout`                       |
| Phase 3 词法切分    | 切分预处理 token，并把注释替换为空格       | `grep -n '这个注释' hello.ii`                                         | 没有任何输出，说明注释已经消失                                                |
| Phase 4 预处理     | 展开 `#include` 和宏，删除预处理指令       | `tail -n 12 hello.ii`                                             | `TARGET` 变成 `"world"`；`#define` 消失；`#include` 被展开，所以 `.ii` 很大  |
| Phase 5 确定字符串编码 | 确定相邻字符串使用的共同编码              | `grep -n 'Hello' hello.ii | tail -n 1`                           | 看到 `"Hello, " "world" "!\n"`；三个都没有 `u8`、`L` 等前缀，所以共同使用普通窄字符串编码 |
| Phase 6 字符串拼接   | 把相邻字符串合成一个字符串                 | `grep -n 'Hello' hello.s`                                         | 看到类似 `.string "Hello, world!\n"`，三个字符串已经成为一个                   |
| Phase 7 编译      | 进行语法分析、类型检查、语义分析并生成代码       | `g++ -std=c++23 -fsyntax-only hello.cpp && echo "phase 7 passed"` | 输出 `phase 7 passed`，说明代码通过语法和语义检查；汇编结果在 `hello.s`              |
| Phase 8 模板实例化   | 根据调用生成具体模板函数                    | `nm -C hello.o | grep 'greet<'`                                  | 看到 `void greet<std::ostream>(std::ostream&)`，说明模板已经实例化         |
| Phase 9 链接      | 把 `hello.o`、C++标准库等组合成可执行程序     | `ldd ./hello` （otool -L ./hello）然后 `./hello`                                        | `ldd` 显示 `libstdc++.so` 等库；运行输出 `Hello, world!`                |
*/

