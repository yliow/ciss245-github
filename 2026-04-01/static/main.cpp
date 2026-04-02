#include <iostream>
#include "C.h"

int main()
{
    std::cout << C::get_num_objects() << '\n';
    C c(0);
    std::cout << C::get_num_objects() << '\n';
    C d(1);
    std::cout << C::get_num_objects() << '\n';
    std::cout << c.x_ << '\n'; 
    std::cout << d.x_ << '\n';
    for (int i = 0; i < 5; ++i)
    {
        std::cout << C::get_num_objects() << '\n';
        C e(11);
        std::cout << C::get_num_objects() << '\n';
    }
    std::cout << "after loop: " << C::get_num_objects() << '\n';
    // std::cout << c.num_objects_ << '\n';
    // std::cout << d.num_objects_ << '\n';
    // c.num_objects_ = 5;
    // std::cout << c.num_objects_ << '\n';
    // std::cout << d.num_objects_ << '\n';
    std::cout << C::get_num_objects() << '\n';
    
    return 0;
}
