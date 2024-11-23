#include <iostream>
#include "vec2.h"

int main()
{
    vec2< double > v(1.1, 2.2);
    vec2< double > u(1.1, 1.2);
    std::cout << "v:" << v << '\n';
    std::cout << "u:" << u << '\n';
    std::cout << "v + u:" << v + u << '\n';

    vec2< float > a(0.5f, 0.6f);
    vec2< float > b(1.5f, 1.6f);
    std::cout << "a:" << a << '\n';
    std::cout << "b:" << b << '\n';
    std::cout << "a + b:" << a + b << '\n';
    return 0;
}
