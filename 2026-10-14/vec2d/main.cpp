#include <iostream>
#include "vec2d.h"

int main()
{
    vec2d u(0, 0);
    std::cout << "u:" << u << '\n'; // prints <0, 0>
    vec2d v(0, 1);
    u += v; // u becomes (0, 1);
    u += v; // u becomes (0, 2);
    std::cout << u.x() << '\n'; // prints 0
    std::cout << u.y() << '\n'; // prints 2
    u.x() = 3; // u.x_ becomes 3

    // bracket operator
    std::cout << u[0] // u[0] ------> u.operator[](0)
              << '\n'; // prints u.x_
    u[0] = 4; // sets u.x_ to 4
    std::cout << u[1] << '\n'; // prints u.y_
    u[1] = 8;                  // u.y_ set to 8
    
    u = v * 5; // v * 5 = v.operator*(5) ...   u becomes <0 * 5, 1 * 5>
    u = 5 * v; // u becomes (5 * 0, 5 * 1>
               // note that v * 5 and 5 * v gives the same 2d vector
               // operator*(5, v) ----> call v.operator*(5)
    
    return 0;
}
