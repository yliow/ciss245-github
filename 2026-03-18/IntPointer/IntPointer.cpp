// IntPointer.cpp
#include <iostream>
#include "IntPointer.h"

IntPointer::IntPointer(int i)
    : p_(new int)
{
    *p_ = i;
}

IntPointer::~IntPointer()
{
    delete p_;
    std::cout << "IntPointer::~IntPointer() ...\n";
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
