#include <iostream>
#include "IntPointer.h"

int main()
{
    int * p;
    p = new int;
    std::cout << (*p) << '\n';
    *p = 42;
    std::cout << (*p) << '\n';
    delete p;

    IntPointer P(42); // allocate memory for P.p_ to pointer to; set it to 42
    std::cout << P.dereference() << '\n';
    return 0;
}
