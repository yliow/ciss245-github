// file: vec2d.cpp

#include <iostream>
#include "vec2d.h"

vec2d::vec2d(double x, double y)
    : x_(x), y_(y)
{}

double vec2d::operator[](int i) const
{
    return (i == 0 ? x_ : y_);
    //else .... throw an exception
}
double & vec2d::operator[](int i)
{
    return (i == 0 ? x_ : y_);
    //else .... throw an exception
}
  
std::ostream & operator<<(std::ostream & cout, const vec2d & v)
{
    cout << '<' << v[0] << ", " << v[1] << '>';
    // v[0] same as v.operator[](0)
    return cout;
}

const vec2d & vec2d::operator+=(const vec2d & v)
{
    this->x_ += v.x_;
    this->y_ += v.y_;
    return (*this);
}
