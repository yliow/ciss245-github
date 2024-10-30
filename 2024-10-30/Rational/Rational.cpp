#include <iostream>
#include "Rational.h"

Rational::Rational()
    : n_(0), d_(1)
{}

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

// Rational::Rational(const Rational & r)
//     : n_(r.n_), d_(r.d_)
// {}

std::ostream & operator<<(std::ostream & cout, const Rational & r)
{
    cout << r.get_n() << '/' << r.get_d();
    return cout;
}

int Rational::get_n() const
{
    return n_;        
}

int Rational::get_d() const
{
    return d_;        
}

Rational & Rational::operator+=(const Rational & r)
{
    n_ = n_ * r.d_ + r.n_ * d_;
    d_ *= r.d_;
    return (*this); // not this which is Rational *
}

void Rational::m()
{
    std::cout << "Rational::m() ... " << this << '\n';
}

Rational Rational::operator+(const Rational & r) const
{
    return (Rational(*this) += r);
}
