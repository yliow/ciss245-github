#include <iostream>
#include "Fraction.h"

Fraction operator+(const Fraction & f0, const Fraction & f1)
{
    Fraction ret = {f0.n * f1.d + f1.n * f0.d, f0.d * f1.d};
    return ret;
}

Fraction & operator+=(Fraction & f0, const Fraction & f1)
{
    f0.n = f0.n * f1.d + f1.n * f0.d;
    f0.d *= f1.d;
    return f0;
}

bool operator==(const Fraction & f0, const Fraction & f1)
{
    return (f0.n * f1.d == f1.n * f0.d);
}

std::ostream & operator<<(std::ostream & cout, const Fraction & f)
{
    cout << f.n << '/' << f.d;
    return cout;
}

