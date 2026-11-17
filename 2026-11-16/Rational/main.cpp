#include <iostream>

class DivisionError
{};

class Rational
{
public:
    Rational(int n, int d)
        : n_(n), d_(d)
    {
        if (d == 0) throw DivisionError();
    }
    Rational & operator/=(const Rational & r)
    {
        if (r.n == 0) throw DivisionError();
        n_ = n_ * r.d_ - r.n_ * d_;
        d_ *= r.d_;
    }
    Rational & operator/(const Rational & r) const
    {
        if (r.n == 0) throw DivisionError();
        return (Rational(*this) /= r);
    }

    int n_, d_;
};

int main()
{
    try
    {
    }
    catch (?????? & e)
    {
    }
    return 0;
}
