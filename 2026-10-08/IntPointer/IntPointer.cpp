#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer(int v)
    : p_(new int)
{
    *p_ = v;
}

int IntPointer::dereference() const
{
    return *p_;
}

// // dereference() //

void IntPointer::deallocate()
{
    delete p_;
}

// void IntPointer::allocate()
// {}

