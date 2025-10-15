#include <iostream>
#include "Fraction.h"

Fraction Fraction_get(int n, int d)
{
    Fraction ret = {n, d};
    return ret;
}

int Fraction_get_n(const Fraction & f)
{
    return f.n;
}

int Fraction_get_d(const Fraction & f)
{
    return f.d;
}

Fraction & operator+=(Fraction & f0, const Fraction & f1)
{
    f0.n = f0.n * f1.d + f0.d * f1.n;
    f0.d *= f1.d;
    return f0;
}

std::ostream & operator<<(std::ostream & cout, const Fraction & f)
{
    cout << f.n << '/' << f.d;
    return cout;
}
