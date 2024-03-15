#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(int capacity)
    : p_(new int[capacity]), size_(0), capacity_(capacity)
{}

int IntDynArray::size() const
{
    return size_;
}

int IntDynArray::operator[](int i) const
{
    return p_[i];
}

void IntDynArray::push_back(int e)
{
    p_[size_++] = e;
}

std::ostream & operator<<(std::ostream & cout,
                          const IntDynArray & x)
{
    cout << '{';
    for (int i = 0; i < x.size(); ++i)
    {
        cout << x[i] << ' '; // x[i] calls x.operator[](i)
    }
    cout << '}';
    return cout;
}
