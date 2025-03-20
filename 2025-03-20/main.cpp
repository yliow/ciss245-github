#include <iostream>

int c(int n, int r)
{
    if (r == 0 || n == r)
    {
        std::cout << "base case ... " << n << ", " << r << " return 1\n";
        return 1;
    }
    else
    {
        std::cout << "recursive case ... " << n << ", " << r << '\n';
        int ret = c(n - 1, r) + c(n - 1, r - 1);
        std::cout << "recursive case ... " << n << ", " << r
                  << " return " << ret << '\n';
        return ret;
    }
}

long long int fib(int n, long long int table[])
{
    if (n == 0 || n == 1)
    {
        std::cout << "base case ... " << n << " return 1\n";
        return 1;
    }
    else
    {
        std::cout << "recursive case ... " << n << '\n';
        if (table[n] == 0)
        {
            long long int ret = fib(n - 1, table) + fib(n - 2, table);
            table[n] = ret;
        }
        std::cout << "recursive case ... " << n << " return " << table[n]
                  << '\n';
        return table[n];
    }
}

int main()
{
    //std::cout << c(5, 2) << '\n';
    //std::cout << c(5, 1) << '\n';

    long long int table[100] = {1, 1, 0};
    
    for (int n = 0 ; n <= 50; ++n)
    {
        std::cout << n << ' ' << fib(n, table) << '\n';
    }

    
    return 0;
}
