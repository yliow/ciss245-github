#include <iostream>
#include "IntDynArray.h"

void f()
{
    int x = 42;
    for (int i = 0; i < 10; ++i)
    {
        IntDynArray a;                  // a <----> {0,0,0}, size_=0, capacity_=3
        std::cout << "a:" << a << '\n'; // print {}

        IntDynArray b(a); // calling copy constructor
                          // IntDynArray::IntDynArray(const IntDynArray &)

        IntDynArray c;
        c = a; // same as c.operator=(a)
        
        // a.resize(2); // not complete yet
        // a[0] = 42;
        // a[1] = -1;
        // std::cout << "a:" << a << '\n'; // print {}
    
        // a.resize(5);                    // a <----> {0,0,0,0,0}, size_=5, capacity_=5
        // std::cout << a << '\n';
    
// a[4] = 99;                      // a <----> {0,0,0,0,99}, size_=5, capacity_=5
        // std::cout << "a:" << a << '\n'; // print {0,0,0,0,99}
        // std::cout << a[4] << '\n';
        // a[1] = 42;                      // a <----> {42,0,0,0,99}, size_=5, capacity_=5
        // a.resize(3);                    // a <----> {42,0,0,0,99}, size_3, capacity_=5
        // a.resize(10);                   // a <----> {42,0,0,0,99,0,0,0,0,0}, size_=10, capacity_=10

        // IntDynArray b(a);               // b <----> {42,0,0,0,99,0,0,0,0,0}, size_=10, capacity_=10
    }
}

int main()
{
    f();
   return 0;
}
