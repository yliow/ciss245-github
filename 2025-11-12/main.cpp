#include <iostream>

int k(int n)
{
    if (n == 0) return 1;
    else  return 2 + 3 * k(n - 1);
}

int GCD(int m, int n)
{
    if (n == 0) return m;
    else return GCD(n, m % n);
}

int factorial(int n)
{
    if (n == 0) return 1;
    else return factorial(n - 1) * n;
}

long long int fib(long long int n)
{
    if (n <= 1) return 1;
    else return fib(n - 1) + fib(n - 2);
}

int main()
{
    for (int n = 0; n <= 50; ++n)
    {
        std::cout << n << ' ' << fib(n) << '\n';
    }
    // for (int m = 1; m <= 10; ++m)
    // {
    //     for (int n = m; n <= 10; ++n)
    //     {
    //         std::cout << m << ' ' << n << ' ' << GCD(m, n) << '\n';
    //     }
    // }
    // for (int n = 1; n < 4; ++n)
    // {
    //     std::cout << n << ' ' << k(n) << '\n';
    // }

    // for (int n = 0; n < 5; ++n)
    // {
    //     std::cout << n << ' ' << factorial(n) << '\n';
    // }
    return 0;
}
