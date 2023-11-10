#include <iostream>
#include "IntPointer.h"

void g()
{
    // IntPointer ... C++ smart pointers
    // int * p0;
    // p0 = new int;
    // std::cout << (*p0) << '\n';
    // *p0 = 42;
    // delete p0;  <---- always forget

    IntPointer p(42);
    std::cout << p << '\n';

    // // IntDynArray class
    // int s = 5;         
    // int * p1 = new int[5];          
    // p1[0] = 42;
    // p1[1] = -1;
    // std::cout << p1[1] << '\n';
    // delete [] p1; 
}

void f()
{
    g();
}

int main()
{
    f();
    return 0;
}
