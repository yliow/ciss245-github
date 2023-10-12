// file: Fraction.h
// for user of your library

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

struct Fraction
{
    int n, d;
};

Fraction get_Fraction(int, int);
std::ostream & operator<<(std::ostream & cout, const  Fraction &);
bool operator==(const Fraction &, const Fraction &);

#endif
