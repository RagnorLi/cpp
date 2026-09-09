#include <cstdlib>
#include <iostream>
#include <limits>
#include <vector>

// 1. 下溢绕回：unsigned 减过 0 不会变负，而是绕成最大值
void wraparound_underflow()
{
    std::cout << "======== 1. 下溢绕回 ========\n";

    unsigned int x{0};
    std::cout << "x 初始值: " << x << '\n';
    --x;
    std::cout << "x 减 1 后: " << x
              << "  （期望 -1，实际是 UINT_MAX = "
              << std::numeric_limits<unsigned int>::max() << "）\n";

    // i >= 0 对 unsigned 永远为真，所以这本来是死循环；safety 只是为了让程序能结束
    std::cout << "倒计数 i = 3, 2, 1, 0, 然后绕回:\n";
    unsigned int i{3};
    int safety{0};
    for (; i >= 0; --i) {
        std::cout << "  i = " << i << '\n';
        if (++safety > 6) {
            std::cout << "  ... 永远停不下来，主动 break。此时 i 已经绕成 " << i << '\n';
            break;
        }
    }
    std::cout << '\n';
}

// 2. 有符号和无符号混用：int 会被提升成 unsigned，负数瞬间变成超大数
void mix_signed_and_unsigned()
{
    std::cout << "======== 2. 有符号 / 无符号混用 ========\n";

    int s{-1};
    unsigned int u{1};

    std::cout << "s = " << s << ", u = " << u << '\n';
    std::cout << std::boolalpha;
    std::cout << "s < u ? " << (s < u)
              << "  （人眼觉得 -1 < 1 为真；实际 s 先转成 unsigned，比较的是超大数 < 1）\n";

    int a{-5};
    unsigned int b{2};
    std::cout << "a = " << a << ", b = " << b << '\n';
    std::cout << "a + b = " << (a + b)
              << "  （人眼觉得 -5 + 2 = -3；实际 -5 先转成 unsigned 再加）\n";
    std::cout << std::noboolalpha << '\n';
}

// 3. unsigned 挡不住负数：调用方仍能传入 -1，只是被绕成巨大正数
void accept_count(unsigned int n)
{
    std::cout << "  accept_count 收到 n = " << n << '\n';
}

void unsigned_cannot_block_negative()
{
    std::cout << "======== 3. unsigned 挡不住负数 ========\n";

    // unsigned int blocked{-1}; // 列表初始化会因 narrowing 编译失败，这倒是能挡住
    unsigned int wrapped = -1;     // 拷贝初始化能过，-1 直接绕成 UINT_MAX
    std::cout << "unsigned int wrapped = -1;  得到 " << wrapped << '\n';

    std::cout << "用负数调用 expect-non-negative 的函数:\n";
    accept_count(-1);
    std::cout << '\n';
}

// 4. size_t 是无符号：空容器上 size() - 1 会绕回
void size_t_unsigned_trap()
{
    std::cout << "======== 4. size_t 无符号陷阱 ========\n";

    std::vector<int> empty{};
    auto n = empty.size() - 1; // size_t 的 0 - 1，绕成 SIZE_MAX
    std::cout << "空 vector 的 size() - 1 = " << n
              << "  （不是 -1）\n";

    std::vector<int> v{10, 20, 30};
    int i{-1};
    std::cout << std::boolalpha;
    std::cout << "i < static_cast<int>(v.size()) ? " << (i < static_cast<int>(v.size()))
              << "  （先转成 int 再比，-1 < 3 为真）\n";
    std::cout << "i < v.size() ? " << (i < v.size())
              << "  （混用：-1 转成 SIZE_MAX，SIZE_MAX < 3 为假）\n";
    std::cout << std::noboolalpha;
}

int main()
{
    wraparound_underflow();
    mix_signed_and_unsigned();
    unsigned_cannot_block_negative();
    size_t_unsigned_trap();
    return EXIT_SUCCESS;
}
