#include <iostream>
#include "vec2d.h"

int main()
{
    vec2d v(1.1, 2.2);
    std::cout << v << '\n';

    // v[0]  ....... v.operator[](0)
    // v[1]  ....... v.operator[](1)

    std::cout << v[0] << '\n';
    v[0] = 8.8;
    std::cout << v << '\n';

    v[0] = 1.1;
    v *= 3.1;
    std::cout << "v:" << v << '\n';
    v[0] = 1.1;
    v[1] = 2.2;
    vec2d w = v * 3.1; // same as v.operator*(3.1)
    std::cout << "w:" << w << '\n';
    w = 3.1 * v;
    std::cout << "w:" << w << '\n';
    
    return 0;
}
