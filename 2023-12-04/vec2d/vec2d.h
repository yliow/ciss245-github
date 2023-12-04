// file: vec2d.h

#ifndef VEC2D_H
#define VEC2D_H

#include <iostream>

class IndexException
{};
class DivisionByZeroException
{};

class vec2d
{
  public:
    /*void*/ vec2d(double, double);
    double operator[](int) const;
    double & operator[](int);
    // get_x() .... set_y() ....
    const vec2d & operator+=(const vec2d &);
    vec2d operator+(const vec2d &) const;
    const vec2d & operator*=(double);
    vec2d operator*(double) const;
    double len() const;
  private:
    double x_, y_;
};

// vector of 2 doubles ... vec2d
// vector of 2 floats ...  vec2f
std::ostream & operator<<(std::ostream&, const vec2d &);
vec2d operator*(double, const vec2d &);
double len(const vec2d & v);

#endif
