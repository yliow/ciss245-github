#include <iostream>
#include <vector>

class Numeric
{
};

class Int: public Numeric
{
public:
    Int(int i)
        : value_(i)
    {}
    void print() const
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
    void print() const
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

int main()
{
    Int i(42);
    std::cout << i << '\n';
    Double j(3.14);
    std::cout << j << '\n';

    std::vector< Numeric * > x;
    x.push_back(new Int(42));
    x.push_back(new Double(2.718));
    for (int i = 0; i < 2; ++i)
    {
        x[i]->print();
    }
    std::cout << '\n';
    return 0;
}
