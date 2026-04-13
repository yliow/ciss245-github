// file: vec2.h
#ifndef VEC2_H
#define VEC2_H

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
        if (i == 0) return x_;
        else if (i == 1) return y_;
        std::cout << "going to throw 42" << std::endl;
        throw 42;
    }
    T & operator[](int i)
    {
        if (i == 0) return x_;
        else if (i == 1) return y_;
        std::cout << "going to throw 42" << std::endl;
        throw 42;
    }
    vec2< T > & operator+=(const vec2< T > & v)
    {
        x_ += v.x_;
        y_ += v.y_;
        return (*this);
    }
    vec2< T > operator+(const vec2< T > & v) const
    {
        return (vec2< T >(*this) += v);
    }
    
  private:
    T x_, y_;
};

template < typename T >
std::ostream & operator<<(std::ostream & cout, const vec2< T > & v)
{
    cout << '<'
         << v[0] << ", " << v[1]
         << '>';
    return cout;
}
#endif

