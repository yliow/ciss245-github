#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer(int i)
    : p_(new int)
{
    *p_ = i;
}

IntPointer::IntPointer()
    : p_(new int)
{
    *p_ = 0;
}

/* The default copy ctor (see below) is wrong ... double free error
IntPointer(const IntPointer & i)
    : p_(i.p_)
{}
*/
IntPointer::IntPointer(const IntPointer & i)
    : p_(new int)
{
    *p_ = *(i.p_);
}


IntPointer::~IntPointer()
{
    std::cout << "IntPointer::~IntPointer() ... " << *p_ << " ... deallocating\n";
    delete p_;
}


/* WRONG: 1. Leak 2. double free
IntPointer & IntPointer::operator=(const IntPointer & p)
{
    p_ = p.p_;
}
*/

IntPointer & IntPointer::operator=(const IntPointer & p)
{
    *p_ = *(p.p_);
    return (*this);
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
