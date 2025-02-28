#include <iostream>
#include "vec2d.h"

vec2d::vec2d(double x, double y)
    : x_(x), y_(y)
{}

double vec2d::get_x() const
{
    return x_;
}

double vec2d::get_y() const
{
    return y_;
}

double vec2d::operator[](int i) const
{
    if (i == 0) return x_;
    else if (i == 1) return y_;
    else return 99999; // WRONG ... need exception
}
double & vec2d::operator[](int i)
{
    if (i == 0) return x_;
    else if (i == 1) return y_;
    else return x_; // WRONG .. need exception
}

void vec2d::operator*=(double d)
{
    x_ *= d;
    y_ *= d;
}

vec2d vec2d::operator*(double d)
{
    vec2d ret(x_, y_);
    ret *= d;
    return ret;
}

std::ostream & operator<<(std::ostream & cout, const vec2d & v)
{
    cout << '<' << v.get_x() << ", " << v.get_y() << '>';
    return cout;
}
