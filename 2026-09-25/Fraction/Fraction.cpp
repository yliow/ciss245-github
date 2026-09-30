#include <iostream>
#include "Fraction.h"

Fraction get_Fraction(int n, int d)
{
    Fraction ret = {n, d};
    return ret;
}

void Fraction_println(const Fraction & f)
{
    std::cout << f.n << '/' << f.d << '\n';
}

Fraction Fraction_sum(const Fraction & f,
                      const Fraction & g)
{
    Fraction ret = {f.n * g.d + f.d * g.n, f.d * g.d};
    return ret;
}

void operator+=(Fraction & lhs, const Fraction & rhs)
{
    lhs.n = lhs.n * rhs.d + lhs.d * rhs.n;
    lhs.d *= rhs.d;
}
// a += b ------> a = a + b
Fraction operator+(const Fraction & f, const Fraction & g)
{
    Fraction ret = f;
    ret += g;
    return ret;
}

bool operator==(const Fraction & lhs, const Fraction & rhs)
{
    return (lhs.n * rhs.d == lhs.d * rhs.n);
}

bool operator!=(const Fraction & lhs, const Fraction & rhs)
{
    return !(lhs == rhs);
}

bool operator<(const Fraction & lhs, const Fraction & rhs)
{
    return true;
}

std::ostream & operator<<(std::ostream & cout, const Fraction & f)
{
    cout << f.n << '/' << f.d;
    return cout;
}
