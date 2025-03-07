#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray()
    : p_(new int[3]), size_(0), capacity_(3)
{}

IntDynArray::~IntDynArray()
{
    delete [] p_;
}

int IntDynArray::size() const
{
    return size_;
}

int IntDynArray::operator[](int i) const
{
    return p_[i];
}


std::ostream& operator<<(std::ostream & cout,
                         const IntDynArray & a)
{
    cout << '{';
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << ", ";
    }
    cout << '}';
    return cout;
}
