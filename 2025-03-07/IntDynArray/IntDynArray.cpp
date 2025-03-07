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

int & IntDynArray::operator[](int i)
{
    return p_[i];
}

void IntDynArray::resize(int size)
{
    if (size <= capacity_)
    {
        size_ = size;
    }
    else // not enough case
    {
        int * p = new int[size];
        for (int i = 0; i < size_; ++i)
        {
            p[i] = p_[i];
        }
        delete[] p_;
        p_ = p;
        size_ = size;
        capacity_ = size;
    }
}

std::ostream& operator<<(std::ostream & cout,
                         const IntDynArray & a)
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
