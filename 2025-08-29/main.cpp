#include <iostream>
#include <cmath>

bool isprime(int n);


int min(int x, int y)
{
    return (x <= y ? x : y);
}

int main()
{
    int n0, d0; // models fraction n0/d0
    int n1, d1; // models fraction n1/d1
    std::cin >> n0 >> d0 >> n1 >> d1;

    int n2, d2;
    // compute n2/d2 as n0/d0 + n1/d1.
    n2 = n0 *d1 + d0 * n1;
    d2 = d0 * d1;

    // now compute GCD of n2,d2. store it in g.
    int g = 1;
    for (int i = 1; i <= min(n2, d2); ++i)
    {
        if (n2 % i == 0 && d2 & i == 0)
        {
            if (i > g)
            {
                g = i; 
            }
        }
    }

    std::cout << n0 << '/' << d0
              << " + "
              << n1 << '/' << d1
              << " = "
              << n2 << '/' << d2
              << '\n';
    
    return 0;
    // double x;
    // std::cin >> x;
    // for (int n = 2; n <= x; ++n)
    // {
    //     if (isprime(n))
    //     {
    //         std::cout << n << ' ';
    //     }
    // }
    // std::cout << '\n';

    // return 0;
}


bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
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
}
