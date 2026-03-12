#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
public:
    // Rational() -- g++ does not give u the default is any ctor is defined
    // Rational(const Rational &) -- g++ does not give u if u defined a copy ctor
    Rational(int, int);
    Rational(const Rational &);
    Rational & operator+=(const Rational &);
    int n() const;
    int d() const;
private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream &, const Rational &);

#endif
