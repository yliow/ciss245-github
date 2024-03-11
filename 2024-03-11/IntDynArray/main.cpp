#include <iostream>
#include "IntDynArray.h"

int main()
{
    IntDynArray x(5); // cap = 5, size = 0
    std::cout << x << '\n';
    // x.push_back(42);
    // std::cout << x << '\n';
    // x.push_back(43);
    
    return 0;
}
