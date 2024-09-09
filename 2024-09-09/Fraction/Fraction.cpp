// Fraction.cpp

#include <iostream>

int gcd(int a, int b)
{
    return 1;
}
    
void print_fraction(int n, int d)
{
    int g = gcd(n, d);
    n = n / g;
    d = d / g;
    std::cout << n << '/' << d;
}

void add_fraction(int xn, int xd,
                  int yn, int yd,
                  int & zn, int & zd)
{
    zn = xn * yd + xd * yn;
    zd = xd * yd;
}
