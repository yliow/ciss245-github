// IntDynArray.cpp
#include <iostream>
#include "IntDynArray.h"

void IntDynArray::push_back(int v)
{
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
}

int IntDynArray::capacity() const
{
    return capacity_;
}
