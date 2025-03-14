#include <iostream>
#include "C.h"

int main()
{
    C c;
    std::cout << c.x_ << ' ' << c.get_a() << '\n';

    C d;
    std::cout << d.x_ << ' ' << d.get_a() << '\n';    

    c.set_a(99999999);
    std::cout << c.get_a() << '\n';
    std::cout << d.get_a() << '\n';
    std::cout << C::get_a() << '\n';
    
    d.set_a(-99999999);
    std::cout << c.get_a() << '\n';
    std::cout << d.get_a() << '\n';
    std::cout << C::get_a() << '\n';
    
    return 0;
}
