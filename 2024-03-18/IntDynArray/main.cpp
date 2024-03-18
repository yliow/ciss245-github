#include <iostream>
#include "IntDynArray.h"

int main()
{
    IntDynArray x(5); // cap = 5, size = 0
    std::cout << x << '\n';
    for (int i = 42; i < 50; ++i)        
    {
        x.push_back(i);
        std::cout << x << '\n';
    }
    
    return 0;
}
