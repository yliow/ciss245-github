#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer(int i)
    : p_(new int)
{
    *p_ = i;
}

IntPointer::IntPointer(const IntPointer & P)
    : p_(new int)
{
    *p_ = *(P.p_);
}

IntPointer::~IntPointer()
{
    std::cout << "IntPointer::~IntPointer() ... \n";
    delete p_;
}

void IntPointer::deallocate()
{
    delete p_;
}
int IntPointer::dereference() const
{
    return *p_;
}
