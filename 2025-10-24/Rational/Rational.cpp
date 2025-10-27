#include <iostream>
#include "Rational.h"

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

void Rational::print() const
{
    std::cout << n_ << '/' << d_ << '\n';
}

int Rational::get_n() const
{
    return n_;
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
