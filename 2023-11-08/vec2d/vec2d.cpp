// file: vec2d.cpp

#include <iostream>
#include <cmath>
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

vec2d vec2d::operator+(const vec2d & v) const
{
    return (vec2d(*this) += v);
}

const vec2d & vec2d::operator*=(double c)
{
    x_ *= c;
    y_ *= c;
    return (*this);
}

vec2d vec2d::operator*(double c) const
{
    return (vec2d(*this) *= c);
}

vec2d operator*(double c, const vec2d & v)
{
    return v * c; // v.operator*(c)
}

double vec2d::len() const
{
    return sqrt(x_ * x_ + y_ * y_);
}
double len(const vec2d & v)
{
    return v.len();
}
