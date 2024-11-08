#include "C.h"

int C::y_(99);
// or int C::y_ = 0;

int C::num_objects_(0);

int C::get_y()
{
    return y_;
}

int C::get_num_objects()
{
    return num_objects_;
}


C::C(int x)
    : x_(x)
{
    ++num_objects_;
}

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
