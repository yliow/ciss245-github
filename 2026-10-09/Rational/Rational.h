#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational(int, int);
    Rational(int);
    int n() const;
    int & n();
    int d() const;
    int & d();
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
