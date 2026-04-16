#include <iostream>
#include "vec2.h"

// template < typename T >
// void swap(T & a, T & b)
// {
//     T t = a;
//     a = b;
//     b = t;
// }

int main()
{
    // int i = 0, j = 1;
    // swap< int >(i, j);

    vec2< double > v(1.1, 2.2);
    vec2< float > u(1.1f, 2.2f);

    std::cout << v << '\n';
    std::cout << u << '\n';

    vec2< double > v0(0.0, 1.0);
    v += v0;
    std::cout << "v:" << v << '\n';

    vec2< double > v1(0, 0);
    v1 = v + v0;
    std::cout << "v1:" << v1 << '\n';

    try
    {
        std::cout << v[2] << '\n';
    }
    catch (IndexError &  e)
    {
        std::cout << "i just caught an IndexError object\n";
    }
    
    return 0;
}
