#include <iostream>
#include "IntArray.h"

int IntArray::size() const
{
    return size_;
}

int IntArray::capacity() const
{
    return capacity_;
}

void IntArray::push_back(int v)
{
    x_[size_++] = v;
}

int IntArray::operator[](int i) const
{
    return x_[i];
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
