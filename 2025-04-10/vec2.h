// template class must be completely in header file
// do NOT put method bodies in to cpp file -- ERROR

#ifndef VEC2_H
#define VEC2H

#include <iostream>

class IndexOutOfBound
{};

template < typename T >
class vec2 // WRONG: vec2< T >!!!!
{
public:
    vec2(T x, T y);
    T operator[](int i) const;
    T & operator[](int i);

private:
    T x_, y_;
};

template < typename T >
vec2< T >::vec2(T x, T y) // NOT vec2< T >(T x, T y) !!!
: x_(x), y_(y)
{}

template < typename T >
T vec2< T >::operator[](int i) const
{
    if (i < 0 || i > 1) throw IndexOutOfBound();
    if (i == 0) return x_;
    else return y_;
}

template < typename T >
T & vec2< T >::operator[](int i)
{
    if (i < 0 || i > 1) throw IndexOutOfBound();
    if (i == 0) return x_;
    else return y_;
}


template < typename T >
std::ostream & operator<<(std::ostream & cout, const vec2< T > & v)
{
    cout << '<' << v[0] << ", " << v[1] << '>';
    return cout;
}


#endif
