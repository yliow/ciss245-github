#include <iostream>
#include "Int.h"

Int::Int()
    : x_(0)
{}

Int::Int(int i)
    : x_(i)
{}

Int & Int::operator+=(const Int & i)
{
    x_ += i.x_;
    return (*this);
}

Int Int::operator+(const Int & i) const
{
    return (Int(*this) += i);
}

int Int::get_value() const
{
    return x_;
}

std::ostream & operator<<(std::ostream & cout, const Int & x)
{
    cout << x.get_value();
    return cout;
}
