#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational(int, int);
    void print() const;
    int get_n() const;
    int n() const;
    void set_n(int);
    int get_d() const;
    // write a set_d
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
