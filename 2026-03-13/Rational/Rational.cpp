#include <iostream>
#include "Rational.h"

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}


Rational::Rational(const Rational & r)
    : n_(r.n_), d_(r.d_)
{}

Rational & Rational::operator+=(const Rational & r)
{
    n_ = n_ * r.d_ + d_ * r.n_;
    d_ = d_ * r.d_;
    return (*this);
}

Rational Rational::operator+(const Rational & r1) const
{
    return (Rational(*this) += r1);
}

Rational & Rational::operator-=(const Rational & r)
{
    n_ = n_ * r.d_ - d_ * r.n_;
    d_ = d_ * r.d_;
    return (*this);
}

Rational Rational::operator-(const Rational & r1) const
{
    return (Rational(*this) -= r1);
}

int Rational::n() const
{
    return n_;
}
int & Rational::n() 
{
    return n_;
}

int Rational::get_n() const
{
    return n_;
}
Rational & Rational::set_n(int n)
{
    n_ = n;
    return (*this);
}

int Rational::d() const
{
    return d_;
}
Rational &  Rational::set_d(int d)
{
    d_ = d;
    return (*this);
}


std::ostream & operator<<(std::ostream & cout,
                          const Rational & r)
{
    cout << r.n() << '/' << r.d();
    return cout;
}

// a/b == c/d
// same as
// a * d == c * b
bool Rational::operator==(const Rational & r) const
{
    return (n_ * r.d_ == d_ * r.n_);
}
