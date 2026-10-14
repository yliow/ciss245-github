#include <iostream>
#include "IntPointer.h"

int main()
{
    // int * p;
    // p = new int;
    // *p = 42; <----- WRITE access ... *p is an lvalue
    // std::cout << (*p); <------ READ access .... *p is an rvalue
    // i = *p
    // delete p;

    // p = new int;
    //
    // Usualy we don't forget to "new". We usually forget to "delete".

    IntPointer p(42); // want IntPointer p;
    //std::cout << p.dereference() // prints 42 ... lvalue access i.e. READ access
    //          << '\n';
    std::cout << *p // *p ----> p.operator*()
              << '\n';
    
    p.deallocate(); // pointer inside p has release the int
    // std::cout << p.dereference()
    //           << '\n';
    
    p.allocate();
    //std::cout << p.dereference() << '\n';
    std::cout << *p << '\n';

    // idea: in object p, point a pointer.
    // p.p_ is an int*

    p.allocate();

    IntPointer q; 
    return 0;
} // p calls p.~IntPointer(). Objects CANNOT call its destructor. g++ call. 
