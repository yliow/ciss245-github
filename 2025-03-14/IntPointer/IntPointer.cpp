#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer()
    : p_(new int)
{
    std::cout << "IntPointer::IntPointer() ... allocated\n";
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

IntPointer::~IntPointer()
{
    delete p_;
    std::cout << "IntPointer::~IntPointer() ... deallocatd\n";
}

IntPointer::IntPointer(const IntPointer & p)
    : p_(hew int)
{
    *p_ = *(p.p_);
}

IntPointer & IntPointer::operator=(const IntPointer & p)
{
    *p_ = *(p.p_);
    return (*this);
}
