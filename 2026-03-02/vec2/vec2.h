// file: vec2.h

#ifndef VEC2_H
#define VEC2_H

template < typename T >
struct vec2
{
    T x, y;
};

template < typename T >
vec2< T > vec2_get(T x, T y)
{
    vec2< T > ret = {x, y};
    return ret;
}

template < typename T >
std::ostream & operator<<(std::ostream & cout, const vec2< T > & v)
{
    cout << '<' << v.x << ", " << v.y << '>';
    return cout;
}

template < typename T >
vec2< T > operator+(const vec2< T > & v0, const vec2< T > & v1)
{
    vec2< T > ret = {v0.x + v1.x, v0.y + v1.y};
    return ret;
}

template < typename T >
T get(const vec2< T > & v, int i)
{
    if (i == 0) return v.x;
    else return v.y;
}

#endif
