#include <iostream>

int f(int x)
{
    if (x == 0)
    {
        // base case
        return 42;
    }
    else
    {
        // recursive case
        return f(x - 1);
    }
}

int g(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return g(x - 1) + 1;
    }
}

// recursive sum from 1 to n
int sum0(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum0(n - 1) + n;
    }
}

// iterative version of sum from 1 to n
int sum1(int n)
{
    int ret = 0;
    for (int i = 1; i <= n; ++i)
    {
        ret += i;
    }
    return ret;
}

int main()
{
    //std::cout << f(4) << '\n';
    //std::cout << g(3) << '\n';
    for (int n = 0; n < 10; ++n)
    {
        std::cout << sum0(n) << ' ';
        std::cout << sum1(n) << '\n';
    }
    return 0;
}
