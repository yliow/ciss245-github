#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer(int v)
    : p_(new int)
{
    *p_ = v;
}

IntPointer::IntPointer()
    : p_(NULL)
{}

IntPointer::~IntPointer()
{
    std::cout << "IntPointer::~IntPointer() called ...\n";
    if (p_ != NULL) delete p_;
}

int IntPointer::dereference() const
{
    return *p_;
}

int IntPointer::operator*() const
{
    return *p_;
}

// // dereference() //

void IntPointer::deallocate()
{
    delete p_;
    p_ = NULL;
}

void IntPointer::allocate()
{
    if (p == NULL) p_ = new int;
}

