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

bool Rational::operator==(const Rational & f) const
{
    return (n_ * f.d_ == d_ * f.n_);
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

Rational operator+(int i, const Rational & f)
{
    return f + i; // i.e., f.operator+(i)
}

Rational Rational::operator++()
{
    //std::cout << "pre inc\n";
    (*this) += 1;
    return (*this);
}
Rational Rational::operator++(int i)
{
    //std::cout << "post inc\n";
    Rational ret(*this);
    (*this) += 1;
    return ret;
}

std::ostream & operator<<(std::ostream & cout, const Rational & f)
{
    cout << f.n() << '/' << f.d();
    return cout;
}
