#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational(int, int);
    void print() const;
    int get_n() const;
    int get_d() const;
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
