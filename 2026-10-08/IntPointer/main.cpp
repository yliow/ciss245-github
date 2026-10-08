#include <iostream>

int main()
{
    // int * p;
    // p = new int;
    // *p = 42; <----- WRITE access ... *p is an lvalue
    // std::cout << (*p); <------ READ access .... *p is an rvalue
    // i = *p
    // delete p;

    Intpointer p(42);
    std::cout << p.dereference() // prints 42 ... lvalue access i.e. READ access
              << '\n';
    p.deallocate(); // pointer inside p has release the int
    p.allocate();

    std::cout << p.dereference() << '\n';

    // idea: in object p, point a pointer.
    // p.p_ is an int*
}
