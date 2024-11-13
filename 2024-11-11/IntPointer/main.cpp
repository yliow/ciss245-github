#include <iostream>
#include "IntPointer.h"

void f()
{
    // int * p;
    // p = new int;
    // std::cout << (*p) << '\n';
    // *p = 42;
    // std::cout << (*p) << '\n';
    // delete p;

    IntPointer P(42); // allocate memory for P.p_ to pointer to;
                      // set it to 42
    std::cout << "*P: " << (*P) << '\n';
    //P.dereference() = 41;
    *P = 41; // *P is the same as P.operator*()
    //P.deallocate();
    std::cout << P.dereference() << '\n';

    IntPointer Q(P); // or IntPointer Q = P; ... calling copy
                     // constructor

    Q = P; // Q.operator=(P)
    
}


int main()
{
    f();
    return 0;
}
