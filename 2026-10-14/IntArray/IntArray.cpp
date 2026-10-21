#include <iostream>
#include "IntArray.h"

IntArray::IntArray(int size)
    : size_(size), capacity_(10)
{}

int IntArray::size() const
{
    return size_;
}

int IntArray::operator[](int i) const
{
    return x_[i];
}

bool IntArray::operator==(const IntArray & a) const
{
    if (size_ != a.size_) return false;
    else
    {
        for (int i = 0; i < size_; ++i)
        {
            if (x_[i] != a.x_[i]) return false;
        }
        return true;
    }
}

void IntArray::push_back(int e)
{
    if (size_ < capacity_)
        x_[size_++] = e;
}


int & IntArray::operator[](int i)
{
    return x_[i];    
}

void IntArray::resize(int size)
{
    size_ = size;
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
