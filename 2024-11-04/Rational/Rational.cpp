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

Rational & Rational::operator-=(const Rational & r)
{
    n_ = n_ * r.d_ - r.n_ * d_;
    d_ *= r.d_;
    return (*this); // not this which is Rational *
}

Rational Rational::operator-(const Rational & r) const
{
    return (Rational(*this) -= r);

}

void Rational::set_n(int n)
{
    n_ = n;
}

void Rational::set_d(int d)
{
    d_ = d;
}

std::istream & operator>>(std::istream & cin, Rational & r)
{
    int n, d;
    cin >> n >> d;
    r.set_n(n);
    r.set_d(d);
    return cin;
}

int Rational::n() const
{
    return n_;
}

int & Rational::n()
{
    return n_;
}

Rational & Rational::operator+=(int i)
{
    return ((*this) += Rational(i, 1));
}

Rational Rational::operator+(int i) const
{
    return (Rational(*this) += i);
}

Rational operator+(int i, const Rational & r)
{
    return r + i;
}

