// file: Rational.cpp

#include <iostream>
#include "Rational.h"

Rational::Rational()
    : n_(0), d_(1)
{}

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

Rational::Rational(const Rational & r)
    : n_(r.n_), d_(r.d_)
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

std::ostream & operator<<(std::ostream & cout, const Rational & r)
{
    cout << r.n() << '/' << r.d();
    return cout;
}

std::istream & operator>>(std::istream & cin, Rational & r)
{
    int n, d;
    cin >> n >> d;
    r.n() = n;
    r.d() = d;
    return cin;
}

const Rational & Rational::operator+=(const Rational & r)
{
    n_ = n_ * r.d_ + d_ * r.n_;
    d_ = d_ * r.d_;
    return (*this);
}