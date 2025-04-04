#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational();
    Rational(int, int);
    int n() const;
    int & n();
    int d() const;
    int & d();
    Rational & operator+=(const Rational &);
    Rational operator+(const Rational &) const;
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
