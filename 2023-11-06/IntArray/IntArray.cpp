#include "IntArray.h"
#include <iostream>

IntArray::IntArray()
    : size_(0), capacity_(1024)
{}

IntArray::IntArray(int size)
    : size_(size), capacity_(1024)
{}

int IntArray::size() const
{
    return size_;
}

int IntArray::operator[](int i) const
{
    return x_[i]
}

std::ostream & operator<<(std::ostream & cout, const IntArray & a)
{
    cout << '{';
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << ", ";
    }
    cout << '}';
    return cout;
}
