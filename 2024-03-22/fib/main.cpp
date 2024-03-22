#include <iostream>

long long int fib(int n, long long int table[])
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        if (table[n] == 0)
        {
            table[n] = fib(n - 1, table) + fib(n - 2, table);
        }
        return table[n];
    }
}

int main()
{
    long long int table[1000] = {1, 1};
    for (int i = 0; i < 100; ++i)
    {
        std::cout << i << ' ' << fib(i, table) << '\n';
    }

    return 0;
}
