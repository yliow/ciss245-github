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
