#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer(int i)
    : p_(new int)
{
    *p_ = i;
}

IntPointer::~IntPointer()
{
    std::cout << "IntPointer::~IntPointer() ... " << *p_ << " ... deallocating\n";
    delete p_;
}

// int IntPointer::dereference() const
// {
//     return *p_;
// }

int IntPointer::operator*() const
{
    return *p_;
}

int & IntPointer::operator*()
{
    return *p_;
}

void IntPointer::deallocate()
{
    delete p_;
}
