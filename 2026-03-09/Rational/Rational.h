#ifndef RATIONAL_H
#deinfe RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational(int, int);
  private:
    int n_, d_;
};

std::ostream operator<<(std::ostream &, const Rational &)

#endif

