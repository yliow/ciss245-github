#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(int capacity)
    : p_(new int[capacity]), size_(0), capacity_(capacity)
{}


IntDynArray::IntDynArray(const IntDynArray & a)
    : p_(a.capacity_), size_(a.size_), capacity_(a.capacity_)
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

void IntDynArray::push_back(int e)
{
    if (size_ == capacity_)
    {
        // allocate a bigger array
        int * q = new int[size_ + 1];
        for (int i = 0; i < size_; ++i)
        {
            q[i] = p_[i];
        }
        delete[] p_;
        p_ = q;
        ++capacity_;
    }
    p_[size_++] = e;
}

int IntDynArray::size() const
{
    return size_;
}
int IntDynArray::capacity() const
{
    return capacity_;
}

int IntDynArray::operator[](int i) const
{
    return p_[i]; // *(p_ + i)
}

std::ostream & operator<<(std::ostream & cout,
                          const IntDynArray & a)
{
    cout << '{';
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i]; // same as a.operator[](i)
        if (i < a.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << '}';
    cout << " size:" << a.size() << ' '
         << " capacity:" << a.capacity();
    return cout;
}
