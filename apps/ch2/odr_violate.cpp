int add(int x, int y)
{
    return x + y;
}

// int add(int x, int y)  // violate of ODR, we've already defined function add(int, int)
// {
//     return x + y;
// }

int main()
{
    int x{};
    // int x{5}; // violate of ODR，we're already defined x
}