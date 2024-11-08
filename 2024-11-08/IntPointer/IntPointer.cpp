#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer(int i)
    : p_(new int)
{
    *p_ = i;
}

IntPointer::~IntPointer()
{
    std::cout << "IntPointer::~IntPointer() ... \n";
}

void IntPointer::deallocate()
{
    delete p_;
}
int IntPointer::dereference() const
{
    return *p_;
}
