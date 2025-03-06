#include <iostream>
#include "IntArray.h"

// IntArray::IntArray()
//     : size_(0), capacity_(5)
// {}

std::ostream & operator<<(std::ostream & cout,
                          const IntArray & a)
{
    cout << '{'
         << '}';
    return cout;
}
