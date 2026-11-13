#ifndef FRACTION_H
#define FRACTION_H

struct Fraction
{
    int n; // numerator
    int d; // denomintor
};

void Fraction_println(const Fraction & f);
Fraction Fraction_sum(const Fraction & f,
                      const Fraction & g);
Fraction operator+(const Fraction &, const Fraction &);
std::ostream & operator<<(std::ostream &, const Fraction &);

#endif
