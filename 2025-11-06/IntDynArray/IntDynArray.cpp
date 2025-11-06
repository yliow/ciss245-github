#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(int capacity)
    : p_(new int[capacity]), size_(0), capacity_(capacity)
{}


IntDynArray::~IntDynArray()
{
    delete [] p_;
}


IntDynArray::IntDynArray(const IntDynArray & a)
    : p_(new int[a.size_]), size_(a.size_), capacity_(a.size_)
{
    for (int i = 0; i < a.size_; ++i)
    {
        p_[i] = a.p_[i];
    }
}


int IntDynArray::size() const
{
    return size_;
}

void IntDynArray::resize(int size)
{
    size_ = size;
}

int IntDynArray::operator[](int i) const
{
    return p_[i];
}


int & IntDynArray::operator[](int i)
{
    return p_[i];
}


std::ostream & operator<<(std::ostream & cout, const IntDynArray & a)
{
    cout << '{';
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i];
        if (i < a.size() - 1) cout << ", ";
    }
    cout << '}';
    return cout;
}
