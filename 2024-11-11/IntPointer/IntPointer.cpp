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


void IntPointer::operator=(const IntPointer & P)
{
    // PROBLEM
    // p_ = P.p_;
    *p_ = *(P.p_);
}
