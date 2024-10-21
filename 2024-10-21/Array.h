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
void init(Array< T > & a, int capacity)
{
    a.p = new T[capacity];
    a.size = 0;
    a.capacity = capacity;
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
