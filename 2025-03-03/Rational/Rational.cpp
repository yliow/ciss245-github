#include <iostream>
#incliude "Rational.h"

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

std::ostream & operator<<(std::ostream & cout, const Rational & r)
{
    cout << r.n_ << '/' << r.d_;
    return cout;
}
