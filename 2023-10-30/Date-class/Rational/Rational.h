// file: Rational.h

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational();
    Rational(int n, int d);
    Rational(const Rational &);
    int n() const;
    int d() const;
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream & cout, const Rational &);

#endif
