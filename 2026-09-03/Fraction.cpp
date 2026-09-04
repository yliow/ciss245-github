/*
  A fraction library
 */

#include <iostream>
#include "Fraction.h"

void Fraction_print(int n, int d)
{
    std::cout << n << '/' << d; // 0/5 -> print 0
                                // 5/10 -> print 1/2
                                // -1/-2 -> print 1/2
                                // 5/0 -> UNDEFINED
                                 // -1/2 -> -1/2
                                // 1/-2 -> -1/2
}

void Fraction_println(int n, int d)
{
    Fraction_print(n, d);
    std::cout << '\n';
}

int min(int x, int y)
{
    return (x <= y ? x : y);
}


int GCD(int a, int b)
{
    for (int d = min(a, b); d >= 1; --d)
    {
        if (a % d == 0 && b % d == 0)
        {
            return d;
        }
    }
    return 1;
}

void Fraction_add(int & sum_n, int & sum_d,
                  int xn, int xd,
                  int yn, int yd)
{
    sum_n = xn * yd + xd * yn;
    sum_d = xd * yd;
    int g = GCD(sum_n, sum_d);
    sum_n /= g;
    sum_d /= g;
}
