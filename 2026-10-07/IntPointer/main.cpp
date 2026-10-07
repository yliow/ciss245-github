#include <iostream>

int main()
{
    // int * p;
    // p = new int;
    // *p = 42;
    // delete p;

    Intpointer p(42);
    std::cout << p.dereference() // prints 42
              << '\n';
    p.deallocate(); // pointer inside p has release the int
    p.allocate();

    std::cout << p.dereference() << '\n';

    // idea: in object p, point a pointer.
    // p.p_ is an int*
}
