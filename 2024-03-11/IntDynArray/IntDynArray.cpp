#include <iostream>
#include "IntDynArray.h"

IntDynArray::IntDynArray(int capacity)
    : p_(new int[capacity]), size_(0), capacity_(capacity)
{}

int IntDynArray::size() const
{
    return size_;
}

std::ostream & operator<<(std::ostream & cout,
                          const IntDynArray & x)
{
    cout << '{';
    for (int i = 0; i < x.size(); ++i)
    {
    }
    cout << '}';
    return cout;
}
