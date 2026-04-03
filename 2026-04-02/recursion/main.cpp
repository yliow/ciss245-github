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
    int s = 0;
    for (int i = 0; i <= n; ++i)
    {
        s += i;
    }
    return s;
}

int sum2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum2(n - 1) + n;
    }
}

int main()
{
    // int x = f(3);
    // std::cout << "main () ... x = " << x << '\n';

    for (int i = 0; i <= 5; ++i)
    {
        std::cout << i << ' ' << sum(i) << ' ' << sum2(i) << '\n';
    }
    return 0;
}
