// file: Rational.h

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
  public:
    Rational();
    //Rational(int n);
    Rational(int n, int d=1);
    Rational(const Rational &);
    ~Rational();
    int n() const /* means *this cannot be changed */;
    int & n();
    int d() const;
    int & d();
    const Rational & operator+=(const Rational &); /* const ... WRONG */
    Rational operator+(const Rational & r) const;
    //Rational operator+(int) const;
    const Rational & operator-=(const Rational &);
    Rational operator-(const Rational & r) const;
    const Rational & operator=(const Rational & r);
  private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream & cout, const Rational &);
std::istream & operator>>(std::istream & cin, Rational &);
Rational operator+(int, const Rational &);

#endif
