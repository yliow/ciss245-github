#include <iostream>
#include "fraction.h"

void add_fraction(int n0, int d0,
                  int n1, int d1,
                  int & n2, int & d2)
{
    // compute n2/d2 as n0/d0 + n1/d1.
    n2 = n0 *d1 + d0 * n1;
    d2 = d0 * d1;

    // simplify the fraction n2/d2
    int g = GCD(n2, d2);
    n2 /= g;
    d2 /= g;
}

int min(int x, int y)
{
    return (x <= y ? x : y);
}

int GCD(int m, int n)
{
    // now compute GCD of m,n. store it in g.
    int g = 1;
    for (int i = min(m, n); i >= 1; --i)
    {
        if (m % i == 0 && n % i == 0)
        {
            g = i;
            break;
        }
    }
    return g;
}


void print_fraction(int n, int d)
{
    std::cout << n << '/' << d;
}
