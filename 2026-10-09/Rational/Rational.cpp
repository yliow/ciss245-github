#include <iostream>
#include "Rational.h"

Rational::Rational()
{}

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

Rational::Rational(const Rational & f)
    : n_(f.n_), d_(f.d_)
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

Rational & Rational::operator+=(const Rational & f)
{
    n_ = n_ * f.d_ + d_ * f.n_;
    d_ *= f.d_;
    return (*this);
}

Rational Rational::operator+(const Rational & f) const
{
    return (Rational(*this) += f); 
}

std::ostream & operator<<(std::ostream & cout, const Rational & f)
{
    cout << f.n() << '/' << f.d();
    return cout;
}
