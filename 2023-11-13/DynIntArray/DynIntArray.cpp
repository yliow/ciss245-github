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

int DynIntArray::size() const
{
    return size_;
}


int DynIntArray::operator[](int i) const
{
    return p_[i];
}


std::ostream & operator<<(std::ostream & cout,
                          const DynIntArray & a)
{
    cout << '{';
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << ", "
    }
    cout << '}';
    return cout;
    
}
