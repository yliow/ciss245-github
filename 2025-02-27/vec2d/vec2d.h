#ifndef VEC2D_H
#define VEC2D_H

#include <iostream>

class vec2d
{
  public:
    vec2d(double, double);
    double get_x() const;
    double get_y() const;
  private:
    double x_, y_;
};

std::ostream & operator<<(std::ostream &, const vec2d &);

#endif
