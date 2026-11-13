#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational();
    Rational(int, int=1);
    Rational(const Rational &);
    int n() const;
    int & n();
    int d() const;
    int & d();
    bool operator==(const Rational &) const;
    Rational & operator+=(const Rational &);
    Rational operator+(const Rational &) const;
    //Rational operator+(int) const;
    Rational operator++();
    Rational operator++(int);
  private:
    int n_, d_;
};
Rational operator+(int, const Rational &);

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
