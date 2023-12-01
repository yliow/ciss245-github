#include <iostream>

// void f(int n)
// {
//     std::cout << n << '\n';
//     char c;
//     std::cin >> c;
//     f(n);
// }

// void f(int n)
// {
//     if (n <= 0)
//     {
//         // base case
//         std::cout << "time to stop\n";
//     }
//     else
//     {
//         // recursive case
//         std::cout << n << '\n';
//         char c;
//         std::cin >> c;
//         f(n - 1);
//     }
// }

// void f(int n)
// {
//     if (n <= 0)
//     {
//         // base case
//         std::cout << "time to stop\n";
//     }
//     else
//     {
//         // recursive case
//         std::cout << n << '\n';
//         //char c;
//         //std::cin >> c;
//         f(n + 1);
//     }
// }

// void f(int n)
// {
//     if (n <= 0)
//     {
//         // base case
//         std::cout << "time to stop\n";
//     }
//     else
//     {
//         // recursive case
//         std::cout << n << '\n';
//         char c;
//         std::cin >> c;
//         f(n - 2);
//     }
// }

int sum(int n)
{
    if (n == 0)
    {
        std::cout << "sum n = 0 ... returning 0\n";
        return 0;
    }
    else
    {
        // recursive case
        int t = sum(n - 1);
        //std::cout << "t:" << t << '\n';
        std::cout << "sum n = " << n << " ... returning " << t  + n << "\n";
        return t + n;
    }
}

// compute n! recursively
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int mypow(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return mypow(a, n - 1) * a;
    }
}

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}

int C(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return C(n - 1, r - 1) + C(n - 1, r);
    }
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    //f(5);
    // int ret = sum(5);
    // std::cout << "final:" << ret << '\n';

    // int ret = factorial(5);
    // std::cout << "final:" << ret << '\n';

    // int ret = mypow(2, 5);
    // std::cout << "final:" << ret << '\n';

    // for (int i = 1; i < 7; ++i)
    // {
    //     for (int j = 1; j < 7; ++j)
    //     {
    //         std::cout << i << ' ' << j << ' ' << GCD(i, j) << '\n';
    //     }
    // }

    // for (int i = 0; i <= 5; ++i)
    // {
    //     for (int j = 0; j <= i; ++j)
    //     {
    //         std::cout << i << ' ' << j << ' ' << C(i, j) << '\n';
    //     }
    // }

    for (int i = 0; i < 9; ++i)
    {
        std::cout << i << ' ' << fib(i) << '\n';
    }
        
    return 0;
}
