// vec2 template library

#ifndef VEC2_H
#define VEC2_H

template < typename T >
struct vec2
{
    T x, y;
};

template < typename T >
vec2< T > get_vec2(const T & x, const T & y)
{
    vec2< T > ret = {x, y};
    return ret;
}

template < typename T >
vec2< T > operator+(const vec2< T > & u,
                    const vec2< T > & v)
{
    return get_vec2< T >(u.x + v.x, u.y + v.y);
}

template < typename T >
std::ostream & operator<<(std::ostream & cout,
                          const vec2< T > & v)
{
    cout << '<' << v.x << ", " << v.y << '>';
    return cout;
}

#endif
