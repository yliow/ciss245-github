#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational(int, int);
    int n() const;
    int d() const;
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
