#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(int size)
    : p_(new int[size]), size_(size), capacity_(size)
{}

IntDynArray::IntDynArray(const IntDynArray & a)
    : p_(new int[a.capacity_]), size_(a.size_), capacity_(a.capacity_)
{
    for (int i = 0; i < a.size_; ++i)
    {
        p_[i] = a.p_[i];
    }
}

IntDynArray::~IntDynArray()
{
    delete[] p_;
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

int IntDynArray::capacity() const
{
    return capacity_;
}

void IntDynArray::resize(int size)
{
    if (size <= capacity_)
    {
        size_ = size;
    }
    else
    {
        int * p = new int[size]; // allocate new block
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

std::ostream & operator<<(std::ostream & cout, const IntDynArray & a)
{
    cout << '{';
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i];
        if (i < a.size() - 1) cout << ", ";
    }
    cout << '}';
    cout << " (size:" << a.size() << " capacity:" << a.capacity() << ")";
    return cout;
}
