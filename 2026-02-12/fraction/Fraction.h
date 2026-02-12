#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

struct Fraction
{
    int n;
    int d;
};

Fraction & operator+=(Fraction & f1, const Fraction & f0);
Fraction operator+(const Fraction & f1, const Fraction & f2);

Fraction & operator-=(Fraction & f1, const Fraction & f0);
Fraction operator-(const Fraction & f1, const Fraction & f2);

bool operator==(const Fraction & f0, const Fraction & f1);

std::ostream & operator<<(std::ostream & cout, const Fraction &);

#endif
