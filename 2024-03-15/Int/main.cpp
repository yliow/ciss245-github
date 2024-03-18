#include <iostream>
#include "Int.h"

int main()
{
    Int i(42); // i <-----> 42
    std::cout << i << '\n';
    Int j(i);
    std::cout << j << '\n';
    Int k; // k <-----> 0
    k = i;

    i += j;
    std::cout << i << '\n';

    return 0;
}
