#include "C.h"

int C::y_(0);
// or int C::y_ = 0;

int C::get_y()
{
    return y_;
}

C::C(int x)
    : x_(x)
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
