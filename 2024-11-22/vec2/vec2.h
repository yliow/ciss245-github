#ifndef VEC2_H
#define VEC2_H

#include <iostream>
#include "IndexError.h"

template < typename T >
class vec2
{
public:
    vec2(T, T);
    T operator[](int) const;
    vec2< T > operator+(const vec2< T > &) const;
private:
    T x_, y_;
};

template < typename T >
vec2< T >::vec2(T x, T y)
    : x_(x), y_(y)
{}

template < typename T >
T vec2< T >::operator[](int i) const
{
    if (i == 0) return x_;
    else if (i == 1) return y_;
    throw IndexError();
}

template < typename T >
vec2< T > vec2< T >::operator+(const vec2< T > & v) const
{
    return vec2< T >(x_ + v.x_, y_ + v.y_);
}

template < typename T >
std::ostream & operator<<(std::ostream & cout, const vec2< T > & v)
{
    cout << '<' << v[0] << ", " << v[1] << '>';
    return cout;
}

#endif
