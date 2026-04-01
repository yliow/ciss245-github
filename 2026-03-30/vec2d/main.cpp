#include <iostream>
#include "vec2d.h"

int main()
{
    vec2d u(0.0, 1.1);
    std::cout << u << '\n';

    vec2d v(2.3, 5.5);
    std::cout << v << '\n';

    v += u;
    std::cout << v << '\n';

    // Rationa f;
    // f + 1
    // 1 + f
    vec2d w = u + v; // u + v = <0 + 2.3, 1.1 + 5.5>
    // w = 2.2 * u; // <2.2 * 0, 2.2 * 1.1>
    std::cout << u << '\n';
    w = u * 2.2; // same as u.operator*(2.2). DIY do *= first
    std::cout << w << '\n';
    w = 2.2 * u; // same as operator(2.2, u)
    std::cout << w << '\n';
    
    // double L = len(v); // example of non-member function
    std::cout << len(v) << '\n';
    std::cout << v.len() << '\n';
    //v[0] = 3.14;
    vec2d z;
    return 0;
}
