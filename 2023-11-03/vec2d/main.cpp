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
    
    return 0;
}
