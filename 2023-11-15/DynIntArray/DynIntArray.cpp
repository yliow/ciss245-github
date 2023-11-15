#include <iostream>
#include "DynIntArray.h"

DynIntArray::DynIntArray(int size)
    : p_(new int[2 * size]), size_(size), capacity_(2 * size)
{
    for (int i = 0; i < size; ++i)
    {
        p_[i] = 0;
    }
}

DynIntArray::DynIntArray(const DynIntArray & a)
    : p_(new int[a.capacity_]), size_(a.size_),
         capacity_(a.capacity_)
{
    for (int i = 0; i < a.size_; ++i)
    {
        p_[i] = a.p_[i];
    }
}

const DynIntArray & DynIntArray::operator=(const DynIntArray & a)
{
    if (this != &a)
    {
        delete [] p_;
        size_ = a.size_;
        capacity_ = a.capacity_;
        p_ = new int[a.capacity_];
        for (int i = 0; i < a.size_; ++i)
        {
            p_[i] = a.p_[i];
        }
    }
    return (*this);
}


int DynIntArray::size() const
{
    return size_;
}


int DynIntArray::operator[](int i) const
{
    return p_[i];
}
int & DynIntArray::operator[](int i)
{
    return p_[i];
}


DynIntArray::~DynIntArray()
{
    delete [] p_;
}

std::ostream & operator<<(std::ostream & cout,
                          const DynIntArray & a)
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

void DynIntArray::push_back(int v)
{
    if (size_ < capacity_)
    {
        p_[size_] = v;
        ++size_;
    }
    else
    {
        int * q = new int[size_ + 1];
        for (int i = 0; i < size_; ++i)
        {
            q[i] = p_[i];
        }
        q[size_ + 1] = v;
        ++size_;
        capacity_ = size_;
        delete [] p_;
        p_ = q;
    }
}

int DynIntArray::capacity() const
{
    return capacity_;
}
