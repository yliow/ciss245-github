#include <iostream>
#include "IntPointer.h"
int main()
{
    // int * p;
    // p = new int;
    // *p = 42;
    // std::cout << *p << '\n';
    // delete p;\

    int i;

    IntPointer p(42); // p.p_ auto allocate
    // std::cout << p.dereference() << '\n';
    // p.dereference() = -999;
    // std::cout << p.dereference() << '\n';

    std::cout << *p // same as p.operator*()
              << '\n';
    *p = -999;
    std::cout << *p << '\n';
    
    //std::cout << (*p) << '\n';
    //deallocate p.p_

    IntPointer q(p); // fx copy ctor
    // q = p; // fix assign operator
    std::cout << *p << '\n';
    std::cout << *q << '\n';
    
    // IntPointer * P = new IntPointer(41);

    // delete P;

    // IntPointer q(0);
    // IntPointer r(1000);
    
    return 0;
} // p out of scope ... p.~IntPointer() exec
