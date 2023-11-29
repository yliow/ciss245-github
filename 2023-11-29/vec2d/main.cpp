#include <iostream>
#include "vec2d.h"

int errornumber = 0;
// how to return error state?
// maye if -1 is not a return value ... use -1 as error state????
double f(double x, double y, double z)
{
    // if (z == 0)
    // {
    //     errornumber = 1;
    //     return 0;
    // }
    // return x + y / z;

    if (z == 0) throw -1;
    return x + y / z;
}


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
    std::cout << (v + u) << '\n';

    u *= 10;
    std::cout << u << '\n';

    std::cout << (u * 10) << '\n';
    std::cout << (10 * u) << '\n';
    std::cout << u.len() << '\n';
    std::cout << len(u) << '\n';

    std::cout << f(1, 2, 3) << '\n';
    std::cout << f(1, 2, 0) << '\n';
    
    return 0;
}
