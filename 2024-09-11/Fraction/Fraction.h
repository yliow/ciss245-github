// Fraction.h

#ifndef FRACTION_H
#define FRACTION_H

#include "Fraction.h"

int gcd(int a, int b);
void print_fraction(int n, int d);
void add_fraction(int xn, int xd,
                  int yn, int yd,
                  int & zn, int & zd);
bool eq_fraction(int xn, int xd,
                 int yn, int yd);

#endif
