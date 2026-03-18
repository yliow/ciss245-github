#include <iostream>
#include "IntPointer.h"
int main()
{
    // int * p;
    // p = new int;
    // *p = 42;
    // std::cout << *p << '\n';
    // delete p;

    IntPointer p(42); // p.p_ auto allocate
    std::cout << p.dereference() << '\n';
    p.dereference() = -999;
    std::cout << p.dereference() << '\n';
    
    //std::cout << (*p) << '\n';
    //deallocate p.p_
    return 0;
}
