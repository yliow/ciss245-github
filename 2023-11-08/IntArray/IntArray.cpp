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
    if (size_ < capacity_)
    {
        // version 1
        x_[size_] = v;
        ++(size_);

        // version
        //x_[size_++] = v;
    }
    else
    {
        std::cout << "ERROR: overflow\n";
        // should throw an exception ...
    }
}

void IntArray::bubblesort()
{
    std::cout << (*this) << '\n';
    int n = size_;
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x_[j] > x_[j + 1])
            {
                int t = x_[j];
                x_[j] = x_[j + 1];
                x_[j + 1] = t;
            }
            std::cout << (*this) << '\n';
        }
    }
}
void bubblesort(IntArray & a)
{
    a.bubblesort();
}

void IntArray::selectionsort()
{
    int n = size_;
    for (int i = 0; i < n - 1 ; ++i)
    {
        int min_index = i;
        for (int j = i; j < n; ++j)
        {
            if (x[j] < x[min_index])
            {
                min_index = j;
            }
        }
        if (i != min_index)
        {
            int t = x[i];
            x[i] = x[min_index];
            x[min_index] = t;
        }
    }
}
