#include <iostream>
#include "Fraction.h"

void operator+=(Fraction & a, const Fraction & b)
{
    a.n = a.n * b.d + a.d * b.n;
    a.d = a.d * b.d;
}

std::ostream & operator<<(std::ostream & cout, const Fraction & f)
{
    cout << f.n << '/' << f.d;
    return cout;
}
