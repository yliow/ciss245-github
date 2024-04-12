#include <iostream>

class Int
{
public:
    Int(int i)
        : value_(i)
    {}
    int value_;
};

std::ostream & operator<<(std::ostream & cout, const Int & i)
{
    cout << "<Int " << i.value_ << '>';
    return cout;
}

class Double
{
public:
    Double(double i)
        : value_(i)
    {}
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
    
    return 0;
}
