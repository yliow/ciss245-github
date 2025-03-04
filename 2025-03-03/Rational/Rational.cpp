#include <iostream>
#include "Rational.h"

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

Rational::Rational()
    : n_(0), d_(1)
{}

int Rational::n() const
{
    return n_;
}

int & Rational::n()
{
    return n_;
}

int Rational::d() const
{
    return d_;
}

int & Rational::d()
{
    return d_;
}

Rational & Rational::operator+=(const Rational & r)
{
    n_ = n_ * r.d_ + d_ * r.n_;
    d_ = d_ * r.d_;
    return (*this);
}

Rational Rational::operator+(const Rational & r) const
{
    return (Rational(*this) += r);
}

std::ostream & operator<<(std::ostream & cout, const Rational & r)
{
    cout << r.n() << '/' << r.d();
    return cout;
}
