#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

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

template < typename T >
std::ostream & operator<<(std::ostream & cout,
                          const Array< T > & a)
{
    cout << "<Array " << a.p << ' ';

    // print array that a.p points to ...
    cout << '{';
    for (int i = 0; i < a.size; ++i)
    {
        cout << (a.p)[i];
        if (i < a.size - 1)
        {
            cout << ", ";
        }
    }
    cout << "} ";
    cout << "size:" << a.size << ' '
         << "capacity:" << a.capacity << '>';
    return cout;
}

template < typename T >
void push_back(Array< T > & a, T v)
{
    (a.p)[a.size] = v;
    ++a.size;
}

#endif
