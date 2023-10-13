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

int get_n(const Fraction &);
int get_n(const Fraction *);
void set_n(Fraction & f, int n);
int n(const Fraction &);

bool operator==(const Fraction &, const Fraction &);

const Fraction & operator+=(Fraction & f, const Fraction & g);
Fraction operator+(const Fraction & f, const Fraction & g);

#endif
