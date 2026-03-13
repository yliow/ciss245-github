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

int Rational::get_n() const
{
    return n_;
}
void Rational::set_n(int n)
{
    n_ = n;
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
