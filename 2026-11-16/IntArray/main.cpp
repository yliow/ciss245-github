#include <iostream>

class OverflowError
{};
class UnderflowError
{};
class IndexError
{};

class IntArray
{
public:
    IntArray(int capacity)
        : size_(0), capacity_(capacity)
    {}
    // push element e to the end of the array
    void push_back(int e)
    {
        if (size_ == capacity_) throw OverflowError();
        x_[size_++] = e; 
    }
    void pop_back()
    {
        if (size_ == 0) throw UnderflowError();
        --size_;
    }
    int operator[](int i) const
    {
        //if (i < 0 || i > size - 1) throw IndexError();
        return x_[i];
    }
    int at(int i) const
    {
        if (i < 0 || i > size - 1) throw IndexError();
        return x_[i];
    }
    int x_[5];
    int size_;
    int capacity_;
};


int main()
{
    try
    {
        IntArray arr;
        arr.at(1);
    }
    catch (OverflowError & e)
    {}
    catch (UnderflowError & e)
    {}
    cat+ch (IndexError & e)
    {};

    return 0;
}
