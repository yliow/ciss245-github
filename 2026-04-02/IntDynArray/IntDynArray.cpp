// IntDynArray.cpp
#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(const IntDynArray & a)
    : p_(new int[a.size_]), size_(a.size_), capacity_(a.size_)
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

void IntDynArray::push_back(int v)
{
    if (size_ == capacity_)
    {
        int * p = new int[capacity_ + 1];
        ++capacity_;
        for (int i = 0; i < size_; ++i)
        {
            p[i] = p_[i];
        }
        delete[] p_;
        p_ = p;
    }
    p_[size_++] = v;    
}

int IntDynArray::operator[](int i) const
{
    return p_[i];
}

int & IntDynArray::operator[](int i)
{
    return p_[i];
}

int IntDynArray::size() const
{
    return size_;
}
 
std::ostream & operator<<(std::ostream& cout, const IntDynArray & a)
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

int IntDynArray::capacity() const
{
    return capacity_;
}
