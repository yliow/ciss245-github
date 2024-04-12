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

int main()
{
    Int i(42);
    std::cout << i << '\n';
    return 0;
}
