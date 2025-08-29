#include <iostream>
#include <cmath>

bool isprime(int n)
{
    for (int d = 2; d <= sqrt(n); ++d)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    double x;
    std::cin >> x;
    for (int n = 2; n <= x; ++n)
    {
        if (isprime(n))
        {
            std::cout << n << ' ';
        }
    }
    std::cout << '\n';

    return 0;
}
