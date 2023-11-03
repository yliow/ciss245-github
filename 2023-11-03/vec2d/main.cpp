#include <iostream>
#include "vec2d.h"

int main()
{
    vec2d v(5.5, -1.2);
    std::cout << v << '\n';

    std::cout << v[0] << '\n';
    v[0] = 4.3;
    v[1] = 1.7;
    std::cout << v << '\n';

    vec2d u(1, 2);
    v += u; // compiler look for
            // 1. operator+=(v, u)
            // 2. v.operator+=(u)
    std::cout << v << '\n';
    //std::cout << (v + u) << '\n';
        
    return 0;
}
