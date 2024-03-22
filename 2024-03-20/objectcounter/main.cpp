#include <iostream>
#include "C.h"

int main()
{
    std::cout << C::numobjects << '\n';

    if (1)
    {
        C c0(0);
        std::cout << C::numobjects << '\n';
    }
    std::cout << C::numobjects << '\n';
    
    return 0;
}
