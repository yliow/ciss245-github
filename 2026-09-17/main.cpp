#include <iostream>
#include "array.h"

int main()
{
    // int x[10] = {2, 3, 5};
    // int xlen = 3;
    // int xcapacity = 10;
    // array_println(x, xlen);
    // for (int i = 0; i < 10; ++i)
    // {
    //     array_append(x, &xlen, xcapacity, 7);
    //     array_println(x, xlen);
    // }


    int x = 42;
    int y = 0;
    int * p = &x; // can point to someone else.
                  // *p can also be changed.
    p = &y; // OK
    *p = 1; // OK
    
    int * const q = &x; // constant pointer. cannot change point value.
    q = &y;
    const int * r = &x; // r can change addr.
                       // cannot change *r
    r = &y;

    //const int * const s

    int & rx = x; // rx as a reference is actually
    // int * const
    
    return 0;
}
