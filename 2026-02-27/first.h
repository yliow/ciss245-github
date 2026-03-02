// first.h
#ifndef FIRST_H
#define FIRST_H

template < typename T >
void println(T x)
{
    std::cout << x << '\n';
}


template < typename T >
void println(T x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

template < typename T >
T max(T x, T y)
{
    return (x >= y ? x : y); 
}

template < typename T >
void swap(T & x, T & y)
{
    T t = x;
    x = y;
    y = t;
}

template < typename T, typename S >
S avg(T x, T y)
{
    return (x + y) / 2;
}


template < typename T >
void bubblesort(T x[], int n)
{
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                swap< T >(x[j], x[j + 1]);
            }
        }
    }
}

template < typename T >
void bubblesort(T * start, T * end);

#endif

