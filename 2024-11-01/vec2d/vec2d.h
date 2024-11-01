#ifndef VEC2D_H
#define VEC2D_H

class vec2d
{
  public:
    vec2d(double, double);
  private:
    double x_, y_;
};

std::ostream & operator<<(std::ostream&, const vec2d &);

#endif
