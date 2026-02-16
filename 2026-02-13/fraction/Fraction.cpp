#include <iostream>
#include "Fraction.h"

Fraction & operator+=(Fraction & a, const Fraction & b)
{
    a.n = a.n * b.d + a.d * b.n;
    a.d *= b.d;
    return a;
}

Fraction operator+(const Fraction & f1, const Fraction & f2)
{
    // Fraction ret = {f1.n * f2.d + f1.d * f2.n, f1.d * f2.d};
    // return ret;
    Fraction ret = f1;
    return (ret += f2);
}

Fraction & operator-=(Fraction & a, const Fraction & b)
{
    a.n = a.n * b.d - a.d * b.n;
    a.d *= b.d;
    return a;
}

Fraction operator-(const Fraction & f1, const Fraction & f2)
{
    Fraction ret = f1;
    return (ret -= f2);
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
