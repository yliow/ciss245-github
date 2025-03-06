#include <iostream>
#include "IntArray.h"

// IntArray::IntArray()
//     : size_(0), capacity_(5)
// {}

int IntArray::size() const
{
    return size_;
}

int IntArray::operator[](int i) const
{
    if (i < 0 || i > size_ - 1)
    {
        return -9999;
    }
    else
    {
        return x_[i];
    }
}

std::ostream & operator<<(std::ostream & cout,
                          const IntArray & a)
{
    cout << '{';
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i]; // a[i] same as a.operator[](i)
        if (i < a.size() - 1)
             cout << ", ";
    }
    cout << '}';
    return cout;
}

void IntArray::push_back(int e)
{
    if (size_ < capacity_)
    {
        x_[size_] = e;
        ++size_;
    }
    else
    {
        // indicate an error ... throw exception (later chap)
    }
}
