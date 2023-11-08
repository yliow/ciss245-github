#include "IntArray.h"
#include <iostream>

IntArray::IntArray()
    : size_(0), capacity_(5)
{}

IntArray::IntArray(int size)
    : size_(size), capacity_(5)
{}

int IntArray::size() const
{
    return size_;
}

void IntArray::resize(int size)
{
    size_ = size;
}

int IntArray::operator[](int i) const
{
    if (i < size_)
        return x_[i];
    else
        return -9999; // later: throw an exception
}

int & IntArray::operator[](int i)
{
    return x_[i];
}

std::ostream & operator<<(std::ostream & cout, const IntArray & a)
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

void IntArray::push_back(int v)
{
    a.x_[a.size_];
    a.size_;
}
