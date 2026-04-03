#include <iostream>

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
    if (n == 0) return 0;
    else return sum2(n - 1) + n;
}

int fact(int n)
{
    int p = 1;
    for (int i = 1; i <= n; ++i)
    {
        p *= i;
    }
    return p;
}

int fact2(int n)
{
    if (n == 0) return 1;
    else return fact2(n - 1) * n;
}

int C(int n, int r)
{
    if (n == r || r == 0) return 1;
    else
    {
        return C(n - 1, r) + C(n - 1, r - 1);
    }
}

int gcd(int m, int n)
{
    if (n == 0) return m;
    else return gcd(n, m % n);
}

int fib(int n)
{
    if (n <= 1) return 1;
    else return fib(n - 1) + fib(n - 2);
}

int main()
{
    // for (int n = 0; n < 10; ++n)
    // {
    //     std::cout << n << ' ' << sum(n) << ' ' << sum2(n) << '\n';
    // }

    // for (int n = 0; n < 10; ++n)
    // {
    //     std::cout << n << ' ' << fact(n) << ' ' << fact2(n) << '\n';
    // }

    // std::cout << C(5, 2) << '\n';
    // std::cout << C(6, 2) << '\n';
    // std::cout << gcd(10, 20) << '\n';
    for (int i = 0; i < 50; ++i)
    {
        std::cout << i << ' ' << fib(i) << '\n';
    }
    return 0;
}
