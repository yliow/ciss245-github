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
    //p.deallocate(); // delete p.p_

    return 0;
}
