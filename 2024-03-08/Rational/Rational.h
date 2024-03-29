#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational(int, int);
    int get_n() const;
    void set_n(int);
    int n() const;
    int & n();
    int get_d() const;
    Rational operator+=(const Rational &);
    Rational operator+(const Rational &) const;
  private:
    int n_;
    int d_;
};

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
