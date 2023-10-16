// templates in a sep library MUST be in a header file

#include <iostream>

template < typename T > // template < class T >
T max(T x, T y)
{
    return (x >= y ? x : y);
}

// int max(int x, int y)
// {
//     return (x >= y ? x : y);
// }

// double max(double x, double y)
// {
//     return (x >= y ? x : y);
// }

template < typename T > 
void swap(T & x, T & y)
{
    T t = x;
    x = y;
    y = t;
}

// void swap(int & x, int & y)
// {
//     int t = x;
//     x = y;
//     y = t;
// }

// void swap(double & x, double & y)
// {
//     double t = x;
//     x = y;
//     y = t;
// }

template < typename S, typename T >
S avg(T x, T y)
{
    return (x + y) / 2;
}

template < typename T >
struct Array
{
    T x[1024];
    int capacity;
    int size;
};

template < typename T >
void init(Array< T > & a)
{
    a.capacity = 1024;
    a.size = 0;
}

template < typename T >
void println(Array< T > & a)
{
    std::cout << '{';
    for (int i = 0; i < a.size; ++i)
    {
        std::cout << a.x[i] << ' '; 
    }
    std::cout << '}' << '\n';
}

template < typename T >
void push_back(Array< T > & a, const T & v)
{
    a.x[a.size] = v;
    ++a.size;
}


int main()
{
    std::cout << max< int >(3, 5) << '\n';
    std::cout << max(3, 5) << '\n';

    int x = 0, y = 1;
    swap< int >(x, y);
    std::cout << x << ' ' << y << '\n';

    float a = avg< float, double >(3.4, 5.4);

    Array< int > arr;
    init(arr);
    println(arr);
    push_back(arr, 5);
    println(arr);
    push_back(arr, 3);
    println(arr);
    push_back(arr, 10);
    println(arr);
    
    return 0;
}
