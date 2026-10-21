#include <iostream>
#include "vec2d.h"

vec2d::vec2d(double x=0.0, double y=0.0)
    : x_(x), y_(y)
{}

double vec2d::x() const
{
    return x_;
}

double & vec2d::x()
{
    return x_;
}

double vec2d::y() const
{
    return y_;
}

double & vec2d::y()
{
    return y_;
}

vec2d & vec2d::operator+=(const vec2d & v)
{
    x_ += v.x_;
    y_ += v.y_;
    return (*this);
}

vec2d operator+(const vec2d & v)
{
    return (vec2d(*this) += v);
}

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
