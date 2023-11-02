// file: Rational.cpp

#include <iostream>
#include "Rational.h"

Rational::Rational()
    : n_(0), d_(1)
{}

Rational::Rational(int n)
    : n_(n), d_(1)
{}

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

Rational::Rational(const Rational & r)
    : n_(r.n_), d_(r.d_)
{}

int Rational::n() const
{
    // this points to object invoking this method
    return this->n_;
}
int & Rational::n()
{
    // this points to object invoking this method
    return this->n_;
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
    this->n_ = this->n_ * r.d_ + this->d_ * r.n_;
    this->d_ = this->d_ * r.d_;
    return (*this);
}

Rational Rational::operator+(const Rational & r) const
{
    // method 1
    // Rational ret(n_ * r.d_ + d_ * r.n_, d_ * r.d_);
    // return ret;
    //
    // method 2
    return (Rational(*this) += r);
}

const Rational & Rational::operator-=(const Rational & r)
{
    this->n_ = this->n_ * r.d_ - this->d_ * r.n_;
    this->d_ = this->d_ * r.d_;
    return (*this);
}

Rational Rational::operator-(const Rational & r) const
{
    return (Rational(*this) -= r);
}

const Rational & Rational::operator=(const Rational & r)
{
    this->n_ = r.n_;
    this->d_ = r.d_;
    return (*this);
}

Rational::~Rational()
{
    std::cout << "Rational::~Rational() ...\n";
}

// Rational Rational::operator+(int i) const
// {
//     return (*this) + Rational(i, 1);
// }
    
