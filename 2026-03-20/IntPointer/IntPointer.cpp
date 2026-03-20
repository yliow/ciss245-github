// IntPointer.cpp
#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer()
    : p_(new int)
{}

IntPointer::IntPointer(int i)
    : p_(new int)
{
    *p_ = i;

    // FIX
    // 1. destructor
    // 2. copy constructor -- pointer aliasing problem
}

IntPointer::~IntPointer()
{
    delete p_;
    std::cout << "IntPointer::~IntPointer() ...\n";
}

IntPointer::IntPointer(const IntPointer & p)
    : p_(new int)
{
    *p_ = *(p.p_);
}

IntPointer & IntPointer::operator=(const IntPointer & p)
{
    *p_ = *(p.p_);
    return (*this);
}

int IntPointer::dereference() const
{
    return *p_;
}

int & IntPointer::dereference()
{
    return *p_;
}

int IntPointer::operator*() const
{
    return *p_;
}

int & IntPointer::operator*()
{
    return *p_;
}
