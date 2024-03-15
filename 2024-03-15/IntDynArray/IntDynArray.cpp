#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(int capacity)
    : p_(new int[capacity]), size_(0), capacity_(capacity)
{}

int IntDynArray::size() const
{
    return size_;
}


IntDynArray::~IntDynArray()
{
    delete [] p_;
}

IntDynArray::IntDynArray(const IntDynArray & x)
    : p_(new int[x.size_]), size_(x.size_), capacity_(x.size_)
{
    for (int i = 0; i < x.size_; ++i)
    {
        p_[i] = x.p_[i];
    }
}

IntDynArray & IntDynArray::operator=(const IntDynArray & x)
{
    if (this != &x)
    {
        delete[] p_;
        p_ = new int[x.size_];
        size_ = x.size_;
        capacity_ = x.size_;
        for (int i = 0; i < x.size_; ++i)
        {
            p_[i] = x.p_[i];
        }
    }
    return (*this);
}

int IntDynArray::operator[](int i) const
{
    return p_[i];
}

void IntDynArray::push_back(int e)
{
    p_[size_++] = e;
}

int IntDynArray::capacity() const
{
    return capacity_;
}

std::ostream & operator<<(std::ostream & cout,
                          const IntDynArray & x)
{
    cout << '{';
    for (int i = 0; i < x.size(); ++i)
    {
        cout << x[i]; // x[i] calls x.operator[](i)
        if (i < x.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << '}';
    // extra printing for debugging
    cout << ' ' << x.size()
         << ' ' << x.capacity();
    return cout;
}
