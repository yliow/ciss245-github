// Fraction.cpp
// for maintainer of library

#include <iostream>
#include "Fraction.h"


Fraction get_Fraction(int n, int d)
{
    Fraction ret = {n, d};
    return ret;
}

int get_n(const Fraction & f)
{
    return f.n;
}

int get_n(const Fraction * f)
{
    return f->n;
}

void set_n(Fraction & f, int n)
{
    f.n = n;
}

int n(const Fraction & f)
{
    return f.n;
}

std::ostream & operator<<(std::ostream & cout, const
                          Fraction & f)
{
    cout << f.n;
    if (f.d != 1)
    {
        cout << '/' << f.d;
    }
    return cout;
}


bool operator==(const Fraction & f0, const Fraction & f1)
{
    return (f0.n * f1.d == f0.d * f1.n);
}


const Fraction & operator+=(Fraction & f, const Fraction & g)
{
    f.n = f.n * g.d + f.d * g.n;
    //f.n *= g.d;
    //f.n += f.d * g.n;
    f.d *= g.d;
    return f;
}

Fraction operator+(const Fraction & f,
                   const Fraction & g)
{
    Fraction ret = f;
    ret += g;
    return ret;
}