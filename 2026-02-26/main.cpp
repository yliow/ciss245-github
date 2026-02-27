#include <iostream>

// void println(int x)
// {
//     std::cout << x << '\n';
// }

// void println(double x)
// {
//     std::cout << x << '\n';
// }

// void println(char x)
// {
//     std::cout << x << '\n';
// }

template < typename T >
void println(T x)
{
    std::cout << x << '\n';
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

int main()
{
    println< int >(1);
    println< double >(3.14);
    println< char >('c');
    std::cout << max< int >(5, 3) << '\n';
    std::cout << max< int >(3, 5) << '\n';
    std::cout << max< double >(3.1, 5.1) << '\n';

    int x = 1, y = 99;
    std::cout << x << ' ' << y << '\n';
    swap< int >(x, y);
    std::cout << x << ' ' << y << '\n';
    double u = 1.1, v = 99.99;
    std::cout << u << ' ' << v << '\n';
    swap< double >(u, v);
    std::cout << u << ' ' << v << '\n';

    int a = 1, b = 2;
    std::cout << avg< double, float >(1, 2) << '\n';
    return 0;
}
