#include <iostream>

#include "IntPointer.h"

IntPointer::IntPointer(int x)
    : p_(new int)
{
    *p_ = x;
}

IntPointer::~IntPointer()
{
    std::cout << "IntPointer::~IntPointer() " << p_ << '\n';
    delete p_;
}

int * IntPointer::get_p() const
{
    return p_;
}

std::ostream & operator<<(std::ostream & cout,
                          const IntPointer & p)
{
    cout << "<IntPointer " << &p
         << " p: " << p.get_p() << '>';
        //cout << p.get_p();
    return cout;
}
