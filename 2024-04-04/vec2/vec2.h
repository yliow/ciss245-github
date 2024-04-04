#ifndef VEC2_H
#define VEC2_D

template < typename T >
class vec2
{
  public:
    vec2(T x, T y)
        : x_(x), y_(y)
    {}
  private:
    T x_, y_;
};

#endif
