#include <iostream>
#include "C.h"

C::C()
    : x_(42)
{}

std::ostream & operator<<(std::ostream & cout, const C & c)
{
    cout << c.x_;
    return cout;
}

