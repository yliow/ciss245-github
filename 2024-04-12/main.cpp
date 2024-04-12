#include <iostream>
#include <vector>

class Numeric
{
public:
    virtual void print() const = 0;
};

class Int: public Numeric
{
public:
    Int(int i)
        : value_(i)
    {}
    virtual void print() const
    {
        std::cout << "<Int " << value_ << '>' << '\n';
    }
    int value_;
};

std::ostream & operator<<(std::ostream & cout, const Int & i)
{
    cout << "<Int " << i.value_ << '>';
    return cout;
}

class Double: public Numeric
{
public:
    Double(double i)
        : value_(i)
    {}
    virtual void print() const
    {
        std::cout << "<Double " << value_ << '>' << '\n';
    }

    double value_;
};

std::ostream & operator<<(std::ostream & cout, const Double & i)
{
    cout << "<Double " << i.value_ << '>';
    return cout;
}

class Rational: public Numeric
{
public:
    Rational(int n, int d)
        : n_(n), d_(d)
    {}
    virtual void print() const
    {
        std::cout << "<Rational " << n_ << '/' << d_ << '>' << '\n';
    }
    int n_, d_;
};

int main()
{
    // Int i(42);
    // std::cout << i << '\n';
    // Double j(3.14);
    // std::cout << j << '\n';

    std::vector< Numeric * > x;
    x.push_back(new Int(42));
    x.push_back(new Double(2.718));
    x.push_back(new Rational(1, 2));

    for (size_t i = 0; i < x.size(); ++i)
    {
        x[i]->print();
    }
    std::cout << '\n';
    return 0;
}
