#include <iostream>
#include "Rational.h"

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}


Rational::Rational(const Rational & r)
    : n_(r.n_), d_(r.d_)
{}

Rational & Rational::operator+=(const Rational &)
{
    // delay
    return (*this);
}


int Rational::n() const
{
    return n_;
}

int Rational::d() const
{
    return d_;
}


std::ostream & operator<<(std::ostream & cout,
                          const Rational & r)
{
    cout << r.n() << '/' << r.d();
    return cout;
}
