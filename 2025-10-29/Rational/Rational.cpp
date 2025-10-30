#include <iostream>
#include "Rational.h"

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

Rational::~Rational()
{}

void Rational::set_n(int n)
{
    n_ = n;
}

void Rational::print() const
{
    std::cout << n_ << '/' << d_ << '\n';
}

int Rational::get_n() const
{
    return n_;
}

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

int Rational::get_d() const
{
    return d_;
}

std::ostream & operator<<(std::ostream & cout, const Rational & r)
{
    cout << r.get_n() << '/' << r.get_d();
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
