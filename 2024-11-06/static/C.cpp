#include "C.h"

C::C(int x, int y)
    : x_(x), y_(y)
{}

std::ostream & operator<<(std::ostream & cout, const C & c)
{
    cout << "<C x:" << c.x() << ", y:" << c.y() << '>';
    return cout;
}

int C::x() const
{
    return x_;
}

int C::y() const
{
    return y_;
}
