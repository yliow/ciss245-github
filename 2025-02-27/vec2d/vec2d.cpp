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

std::ostream & operator<<(std::ostream & cout, const vec2d & v)
{
    cout << '<' << v.get_x() << ", " << v.get_y() << '>';
    return cout;
}
