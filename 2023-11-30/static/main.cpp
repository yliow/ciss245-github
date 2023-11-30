#include <iostream>
#include "C.h"

int main()
{
    std::cout << C::get_num_objects() << '\n';
    C a(0);
    std::cout << C::get_num_objects() << '\n';
    C b(1);
    std::cout << C::get_num_objects() << '\n';

    if (1)
    {
        C c(2);
        std::cout << C::get_num_objects() << '\n';    
    }
    std::cout << C::get_num_objects() << '\n';
    
    return 0;
}
