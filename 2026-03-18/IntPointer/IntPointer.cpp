// IntPointer.cpp
#include "IntPointer.h"

IntPointer::IntPointer(int i)
    : p_(new int)
{
    *p_ = i;
}

int IntPointer::dereference() const
{
    return *p_;
}

int & IntPointer::dereference()
{
    return *p_;
}
