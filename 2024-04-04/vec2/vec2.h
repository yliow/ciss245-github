#ifndef VEC2_H
#define VEC2_D

#include <iostream>

template < typename T >
class vec2
{
  public:
    vec2(T x, T y)
        : x_(x), y_(y)
    {}
    T operator[](int i) const
    {
        return (i == 0 ? x_ : y_);
    }
    T operator[](int i)
    {
        return (i == 0 ? x_ : y_);
    }
  private:
    T x_, y_;
};

template < typename T >
std::ostream & operator<<(std::ostream & cout,
                          const vec2< T > & v)
{
    cout << '<' << v[0] << ", " << v[1] << '>';
    return cout;
}
#endif
