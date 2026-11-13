#include <iostream>
#include "Fraction.h"

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

Fraction operator+(const Fraction & f, const Fraction & g)
{
    Fraction ret = {f.n * g.d + f.d * g.n, f.d * g.d};
    return ret;
}

std::ostream & operator<<(std::ostream & cout, const Fraction & f)
{
    cout << f.n << '/' << f.d;
    return cout;
}
