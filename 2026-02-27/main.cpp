#include <iostream>
#include "first.h"

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

// moved to "first" library
// template < typename T >
// void println(T x)
// {
//     std::cout << x << '\n';
// }


template < typename T >
T f(T x[])
{
    return x[0];
}

template <>
char f(char x[])
{
    return '$';
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

    int c[5] = {42};
    std::cout << f< int >(c) << '\n';
    double d[5] = {1.1};
    std::cout << f< double >(d) << '\n';

    int aa[5] = {5, 4, 3, 2, 1};
    println(aa, 5);
    bubblesort< int >(aa, 5);
    println(aa, 5);
    double bb[5] = {5.1, 4.1, 3.1, 2.1, 1.1};
    println(bb, 5);
    bubblesort< double >(bb, 5);
    println(bb, 5);
    
    return 0;
}
