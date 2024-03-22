#include <iostream>

int f(int x)
{
    std::cout << "entering f() with x = " << x << '\n';
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return f(x - 1);
    }
}

int sum(int n)
{
    if (n == 0)
    {
        std::cout << "sum 0 ... returning 0\n";
        return 0;
    }
    else
    {
        std::cout << "sum " << n << " ... entering\n";
        int ret = sum(n - 1);
        std::cout << "sum " << n << "... returning " << ret + n << "\n";
        return ret + n;
    }
}

int main()
{
    // int x = f(3);
    // std::cout << "back in main ... x = " << x << "\n";

    int s = sum(5);
    std::cout << s << '\n';
    return 0;
}
