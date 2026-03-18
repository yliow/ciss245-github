#include <iostream>
#include "vec2d.h"

double vec2d::operator[](int i) const
{
    return (i == 0 ? x_ : y_);
}

double & vec2d::operator[](int i)
{
    return (i == 0 ? x_ : y_);
}
    
vec2d & vec2d::operator+=(const vec2d & v)
{
    x_ += v.x_;
    y_ += v.y_;
    return (*this);
}

vec2d vec2d::operator+(const vec2d & v) const
{
    return (vec2d(*this) += v);
}

vec2d vec2d::operator*(double c) const
{
    return vec2d(x_ * c, y_ * c);
}

vec2d operator*(double c, const vec2d & v)
{
    return v * c;
}

std::ostream & operator<<(std::ostream & cout, const vec2d & v)
{
    cout << '<' << v[0] << ", " << v[1] << '>'; // same as v.operator[](0) i.e. v.x_
    return cout;
}


double len(const vec2d & v)
{
    return sqrt(v[0] * v[0] + v[1] * v[1]);
}

double vec2d::len() const
{
    return len(*this);
}
