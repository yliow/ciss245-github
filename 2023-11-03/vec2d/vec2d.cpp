// file: vec2d.cpp

#include <iostream>
#include "vec2d.h"

vec2d::vec2d(double x, double y)
    : x_(x), y_(y)
{}
  
std::ostream & operator<<(std::ostream & cout, const vec2d & v)
{
    cout << '<'
         << '>';
    return cout;
}
