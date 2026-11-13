#include <iostream>
#include "D.h"

int D::counter(0);

D::D(int x)
    : x_(x)
{}

int D::x() const
{
    return x_;
}

int & D::x()
{
    return x_;
}

D::D()
{
    std::cout << "D:D() ... \n";
}


std::ostream & operator<<(std::ostream & cout, const D & d)
{
    cout << d.x();
    return cout;
}
