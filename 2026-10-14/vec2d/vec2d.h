#ifndef VEC2D_H
#define VEC2D_H

#include <iostream>

class vec2d
{
  public:
    vec2d(double=0.0, double=0.0);
    double x() const; // rvalue
    double & x();     // lvalue
    double y() const;
    double & y();
    double operator[](int) const; // rvalue
    double & operator[](int);     // lvalue
    vec2d & operator+=(const vec2d);
    vec2d operator+(const vec2d) const;
    vec2d & operator*=(double);
    vec2d operator*(double);
  private:
    double x_, y_;
};

double operator*(double, const vec2d const);
std::ostream & operator<<(std::ostream &, const vec2d &);


#endif
