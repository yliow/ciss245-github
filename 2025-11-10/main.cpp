#include <iostream>

int f(int x)
{
    std::cout << "entering f() with x = " << x << '\n';
    // if (x == 0)
    // {
    //     return 0;
    // }
    // else
    // {
    //     return f(x - 1);
    // }
    return f(x - 1);
}

//sum from 0 to n
int sum0(int n) // iterative version
{
    int s = 0;
    for (int i = 0; i <= n; ++i)
    {
        s += i;
    }
    return s;
}

int sum1(int n) // recursive version
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum1(n - 1) + n;
    }
}

int sumsq(int n)
{
    if (n == 0) return 0;
    else return sumsq(n - 1) + n * n;
}

int twopower(int n)
{
    if (n == 0) return 1;
    else return twopower(n - 1) * 2;
}

int main()
{
    // int x = f(3);
    // std::cout << "main() ... x = " << x << '\n';

    for (int n = 0; n < 9; ++n)
    {
        std::cout << n << ' ' << sum0(n) << ' ' << sum1(n)
                  << '\n';
    }
    
    return 0;
}
