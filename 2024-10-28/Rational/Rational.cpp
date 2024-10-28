#include <iostream>
#include "Rational.h"

Rational::Rational()
    : n_(0), d_(1)
{}

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

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



