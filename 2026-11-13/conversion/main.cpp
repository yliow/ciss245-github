#include <iostream>

class Rational
{
public:
    Rational(int n)
        : n_(n), d_(1)
    {}
    Rational(int n, int d)
        : n_(n), d_(d)
    {}
    operator int() const
    {
        return n_ / d_;
    }
    Rational operator+(const Rational & r)
    {
        return Rational(n_ * r.d_ + d_ * r.n_, d_ * r.d_);
    }
//private:
    int n_, d_;
};

std::ostream & operator<<(std::ostream & cout, const Rational & f)
{
    cout << f.n_ << '/' << f.d_;
    return cout;
}

int main()
{
    //Rational g[10];
    Rational f(1, 2);
    std::cout << f << '\n';
    std::cout << f + Rational(1, 2) << '\n';
    //std::cout << f + 1 << '\n';

    std::cout << int(f) // operator int
              << '\n';
    
    return 0;
}
