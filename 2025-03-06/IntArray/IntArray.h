#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray
{
  public:
    IntArray() // function body here => this function is inlined
        : size_(0), capacity_(5)
    {}
    int size() const;
    int operator[](int) const;
    void push_back(int);
  private:
    int x_[5];
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntArray &);

#endif
