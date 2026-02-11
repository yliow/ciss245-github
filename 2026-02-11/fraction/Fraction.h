#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

struct Fraction
{
    int n;
    int d;
};

void operator+=(Fraction & f1, const Fraction & f0);
std::ostream & operator<<(std::ostream & cout, const Fraction &);
#endif
