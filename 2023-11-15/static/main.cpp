#include <iostream>
#include "C.h"

int main()
{
    std::cout << C::num_objects << '\n';
    C a(0);
    std::cout << C::num_objects << '\n';
    C b(1);
    std::cout << C::num_objects << '\n';
    C c(2);
    std::cout << C::num_objects << '\n';    

    return 0;
}
