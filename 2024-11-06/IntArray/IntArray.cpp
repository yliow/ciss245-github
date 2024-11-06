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
    return x_[i];
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

void IntArray::push_back(int v)
{
    x_[size_] = v;
    ++size_;
}
