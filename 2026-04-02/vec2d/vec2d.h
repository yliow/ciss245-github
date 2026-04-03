#ifndef VEC2D_H
#define VEC2D_H

#include <iostream>
#include <cmath>

class vec2d
{
  public:
    vec2d::vec2d(double x=0.0, double y=0.0) // same as inline
        : x_(x), y_(y)
    {}
    double operator[](int) const;
    double & operator[](int);
    vec2d & operator+=(const vec2d &);
    vec2d operator+(const vec2d &) const;
    vec2d operator*(double) const;
    double len() const;
  private:
    double x_, y_;
};

vec2d operator*(double, const vec2d &);
std::ostream & operator<<(std::ostream &, const vec2d &);

double len(const vec2d & v);

#endif
