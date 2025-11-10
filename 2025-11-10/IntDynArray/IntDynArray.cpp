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


IntDynArray & IntDynArray::operator=(const IntDynArray & a)
{
    if (this != &a)
    {
        delete[] p_;
        p_ = new int[a.size_];
        size_ = a.size_;
        capacity_ = a.size_;
        for (int i = 0; i < a.size_; ++i)
        {
            p_[i] = a.p_[i];
        }
    }
    return (*this);
}


int IntDynArray::size() const
{
    return size_;
}

void IntDynArray::resize(int size)
{
    if (size <= capacity)
    {
        size_ = size;
    }
    else
    {
        int * q = new int[size];
        for (int i = 0; i < size_; ++i)
        {
            q[i] = p_[i];
        }
        delete[] p_;
        p_ = q;
        size_ = size;
        capacity_size;
    }
}

int IntDynArray::operator[](int i) const
{
    return p_[i];
}


int & IntDynArray::operator[](int i)
{
    // what if i is outside 0 .. size_ - 1??????
    return p_[i];
}

void IntDnArray::push_back(int v)
{
    if (size_ == capacity_)
    {
        int * q = new int[size_ + 1];
        for (int i = 0; i < size_; ++i)
        {
            q[i] = p_[i];
        }
        //
    }
    p_[size_++] = v;
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


