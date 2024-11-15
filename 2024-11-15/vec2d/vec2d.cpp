#include <iostream>
#include "vec2d.h"

vec2d::vec2d(double x, double y)
    : x_(x), y_(y)
{}

double vec2d::operator[](int i) const
{
    if (i == 0) return x_;
    else return y_;
}

double & vec2d::operator[](int i)
{
    if (i == 0) return x_;
    else return y_;
}


std::ostream & operator<<(std::ostream& cout, const vec2d & v)
{
    cout << '<' << v[0] // v[0] = v.operator[](0)
         << ", " << v[1] << '>';
    return cout;
}

vec2d & vec2d::operator*=(double d)
{
    x_ *= d;
    y_ *= d;
    return (*this);
}

vec2d vec2d::operator*(double d) const
{
    return (vec2d(*this) *= d);
}

vec2d operator*(double d, const vec2d & v)
{
    return v * d;
}
