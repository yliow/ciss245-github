#include <iostream>
#include "vec2d.h"

int main()
{
    vec2d v(1.1, 2.2);
    std::cout << v << '\n';

    // v[0]  ....... v.operator[](0)
    // v[1]  ....... v.operator[](1)
    
    return 0;
}
