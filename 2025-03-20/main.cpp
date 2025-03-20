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

long long int fib(int n)
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
    //std::cout << c(5, 2) << '\n';
    //std::cout << c(5, 1) << '\n';

    for (int n = 0; n <= 50; ++n)
    {
        std::cout << n << ' ' << fib(n) << '\n';
    }

    
    return 0;
}
