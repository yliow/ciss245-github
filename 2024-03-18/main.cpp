#include <iostream>
#include "C.h"

// void f()
// {
//     static int x = 0;
//     int y = 0;
//     x++; y++;
//     std::cout << x << ' ' << y << '\n';
// }

int main()
{
    // f(); f(); f(); f(); f();
    C c0(0);
    C c42(42);
    C c99(99);

    std::cout << c0.x << '\n';
    std::cout << c42.x << '\n';
    std::cout << c99.x << '\n';

    std::cout << c0.get_y() << ' ' << c0.get_z() << '\n';
    std::cout << c42.get_y() << ' ' << c42.get_z() << '\n';
    std::cout << c99.get_y() << ' ' << c99.get_z() << '\n';
    c0.set_y(567);
    std::cout << c0.get_y() << ' ' << c0.get_z() << '\n';
    std::cout << c42.get_y() << ' ' << c42.get_z() << '\n';
    std::cout << c99.get_y() << ' ' << c99.get_z() << '\n';

    std::cout << C::get_y() << '\n';
    std::cout << C::get_z() << '\n';
    //C::z = 8888;
    C::set_z(8888);
    std::cout << C::get_y() << '\n';
    std::cout << C::get_z() << '\n';
    std::cout << c0.get_y() << ' ' << c0.get_z() << '\n';
    std::cout << c42.get_y() << ' ' << c42.get_z() << '\n';
    std::cout << c99.get_y() << ' ' << c99.get_z() << '\n';
    
    return 0;
}
