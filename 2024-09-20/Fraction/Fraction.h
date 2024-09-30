#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

struct Fraction
{
    int n;
    int d;
};

Fraction operator+(const Fraction &, const Fraction &);
Fraction & operator+=(Fraction &, const Fraction &);
bool operator==(const Fraction &, const Fraction &);
std::ostream & operator<<(std::ostream &, const Fraction &);
std::istream & operator>>(std::istream &, Fraction &);

#endif
