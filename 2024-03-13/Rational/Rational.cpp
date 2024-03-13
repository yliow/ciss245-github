#include "Rational.h"

Rational::Rational(int n)
    : n_(n), d_(1)
{}

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

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

int Rational::get_d() const
{
    return d_;
}

void Rational::set_n(int n)
{
    n_ = n;
}

std::ostream & operator<<(std::ostream & cout, const Rational & r)
{
    cout << r.n() << '/' << r.get_d();
    return cout;
}

Rational & Rational::operator+=(const Rational & r)
{
    n_ = n_ * r.d_ + d_ * r.n_;
    d_ *= r.d_;
    return (*this);
}

Rational Rational::operator+(const Rational & r) const
{
    //Rational ret(*this);
    return (Rational(*this) += r);
}

// Rational & Rational::operator+=(int i)
// {
//     return ((*this) += Rational(i, 1));
// }

// Rational Rational::operator+(int i)
// {
//     return (Rational(*this) += Rational(i, 1));
// }
