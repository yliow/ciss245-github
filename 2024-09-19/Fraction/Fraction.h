#ifndef FRACTION_H
#define FRACTION_H

struct Fraction
{
    int n;
    int d;
};

void Fraction_print(const Fraction & f);
Fraction Fraction_add(const Fraction & f1,
                      const Fraction & f2);
Fraction operator+(const Fraction & f1,
                   const Fraction & f2);

#endif
