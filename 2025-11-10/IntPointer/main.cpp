#include <iostream>
#include "IntPointer.h"

int main()
{
    // int * p = new int;
    // // have an int value, i.e., (*p)
    // *p = 42;
    // delete p; // <<< MIGHT FORGET ... LEAK

    // create a class where the objects pretend to be pointers

    IntPointer p(42); // p is an object that has pointer p.p_, which points to
                      // 42 in the heap
    
    //std::cout << p.dereference() << '\n'; // get *(p.p_) which is 42
    std::cout << *p // *p is the same p.operator*()
              << '\n'; // recall for fractions/Rationnal class, you can do
                       // r0 * r1 ... same as ... r0.operator*(r1)
    *p = 1;
    std::cout << *p << '\n';
    
    //p.deallocate(); // delete p.p_

    IntPointer q(-1);

    // When constructor allocates memory, there are 3 issues to resolve
    // 1. destr must deallocate
    // 2. copy constr need to be fixed
    // 3. operator= has to be fixed

    IntPointer r(q);
    // OR
    // IntPointer r = q;


    // default ctor is wrong ... set the int that s points to to value 0
    IntPointer s;
    
    r = s; // same as r.operator=(s)

    // in c++ you can do this
    // int i = 2, j = 3, k = 4;
    // i = j;
    // k = i;
    // or
    // k = i = j;
    // NOTE:
    // i = 1 + 2 + 3 + 4 same as i = ((1 + 2) + 3) + 4
    // but
    // i = j = k = l same as i = (j = (k = l))
    
    return 0;
} // q.~IntPointer() called, p.~IntPointer()
