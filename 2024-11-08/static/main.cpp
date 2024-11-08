#include <iostream>
#include "C.h"

int main()
{
    std::cout << "C::num_objects_:" << C::get_num_objects() << '\n';
    if (1)
    {
        C a(1);
        std::cout << "a:" << a << '\n';
        std::cout << "C::num_objects_:" << C::get_num_objects() << '\n';
    }
    std::cout << "C::num_objects_:" << C::get_num_objects() << '\n';

    C b(3);
    std::cout << "b:" << b << '\n';
    std::cout << "C::num_objects_:" << C::get_num_objects() << '\n';

    //std::cout << C::y_ << '\n';
    std::cout << "C::y_:" << C::get_y() << '\n';
    
    return 0;
}
