#ifndef ARRAY_H
#define ARRAY_H

template < typename T >
struct Array
{
    T * p;
    int size;
    int capacity;
};


template < typename T >
void init(Array< T > & a, int size)
{
    a.p = new T[size];
    a.size = 0;
    a.capacity = size;
}


template < typename T >
void swap(T & x, T & y)
{
    T t = x;
    x = y;
    y = t;
    return;
}

#endif
