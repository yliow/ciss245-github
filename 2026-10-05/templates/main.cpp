#include <iostream>
#include "vec2.h"

int max(int x, int y) // max__int__int
{
    return (x >= y ? x : y);
}

double max(double x, double y) // max__double__double
{
    return (x >= y ? x : y);
}

char max(char x, char y) // max__char__char
{
    return (x >= y ? x : y);
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

// must be in the header file not cpp
template < typename T >
void swap(T & x, T & y) // T=int, T=double
{
    T t = x;
    x = y;
    y = t;
}

template < typename S, typename T >
S avg(const T & x, const T & y)
{
    return (x + y) / 2.0;
}

int main()
{
    vec2< double > u = get_vec2< double >(5.5, 2.2);
    vec2< double > v = get_vec2< double >(1.1, 3.3);
    std::cout << "u:" << u << '\n';
    std::cout << "v:" << v << '\n';
    std::cout << "u + v:" << u + v << '\n';

    vec2< float > u0 = get_vec2< float >(5.5f, 2.2f);
    vec2< float > v0 = get_vec2< float >(1.1f, 3.3f);
    std::cout << "u0:" << u0 << '\n';
    std::cout << "v0:" << v0 << '\n';
    std::cout << "u0 + v0:" << u0 + v0 << '\n';

    // std::cout << max(3, 5) << '\n';
    // std::cout << max(3.3, 5.5) << '\n';

    // int i = 0, j = 1;
    // swap(i, j);
    // std::cout << i << ' ' << j << '\n';

    // double x = 1.1, y = 2.2;
    // swap(x, y);
    // std::cout << x << ' ' << x << '\n';

    // int i = 0, j = 1;
    // swap(i, j);
    // std::cout << i << ' ' << j << '\n';

    // double x = 1.1, y = 2.2;
    // swap(x, y);
    // std::cout << x << ' ' << y << '\n';

    // char c = 'a', d = '?';
    // swap(c, d);
    // std::cout << c << ' ' << d << '\n';

    return 0;
}
