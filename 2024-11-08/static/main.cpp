#include <iostream>
#include "C.h"

int main()
{
    C a(1);
    std::cout << "a:" << a << '\n';
    C b(3);
    std::cout << "b:" << b << '\n';

    //std::cout << C::y_ << '\n';
    std::cout << "C::y_:" << C::get_y() << '\n';
    
    return 0;
}
