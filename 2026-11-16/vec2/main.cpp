#include <iostream>
#include "vec2.h"

int main()
{
    vec2< double > v(1.1, 2.2);
    std::cout << v << '\n';
    v *= 2.0;
    std::cout << v << '\n';
    vec2< double > u(0, 0);
    u = v * 2.0;
    std::cout << u << '\n';
    
    return 0;
}
