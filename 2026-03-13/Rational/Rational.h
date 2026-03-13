#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
public:
    // Rational() -- g++ does not give u the default is any ctor is defined
    // Rational(const Rational &) -- g++ does not give u if u defined a copy ctor
    Rational();
    Rational(int, int);
    Rational(int);
    Rational(const Rational &);
    Rational & operator+=(const Rational &);
    Rational operator+(const Rational &) const;
    Rational & operator-=(const Rational &);
    Rational operator-(const Rational &) const;
    int n() const;
    int & n();
    int get_n() const;
    Rational & set_n(int);
    int d() const;
    Rational & set_d(int);
    int & d();
    bool operator==(const Rational & r) const;
private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
