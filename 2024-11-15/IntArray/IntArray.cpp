#include <iostream>
#include "IntArray.h"

IntArray::IntArray()
    : size_(0), capacity_(5)
{}

int IntArray::size() const
{
    return size_;
}

int IntArray::operator[](int i) const
{
    if (i < capacity_)
        return x_[i];
    else
        return -9999999;
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
    if (size_ < capacity_)
    {
        x_[size_] = v;
        ++size_;
    }
}
