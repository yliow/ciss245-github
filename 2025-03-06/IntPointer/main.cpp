#include <iostream>
#include "IntPointer.h"

void f()
{
    IntPointer p;
    //std::cout << p.dereference() << '\n';
    std::cout << (*p) // *p same as p.operator*
              << '\n';
    
    //*p = 42;
    //std::cout << (*p) << '\n';
    *p = 42;
    std::cout << (*p) << '\n';
    IntPointer q;
}

int main()
{
    // REVIEW
    // int * p;
    // // ...
    // p = new int;
    // std::cout << (*p) << '\n';
    // *p = 42;
    // *p += 4;
    // // ....
    // delete p; // usually forget to deallocate ... leak!
    // // ...

    f();

    return 0;
}
