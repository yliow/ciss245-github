#ifndef VEC2D_H
#define VEC2D_H

class vec2d
{
  public:
    vec2d(double, double);
    double operator[](int) const;
    double & operator[](int);
    vec2d & operator*=(double);
    vec2d operator*(double) const;
  private:
    double x_, y_;
};

vec2d operator*(double, const vec2d &);
std::ostream & operator<<(std::ostream&, const vec2d &);

#endif
