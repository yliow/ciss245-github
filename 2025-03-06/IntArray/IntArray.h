#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray
{
  public:
    IntArray()
        : size_(0), capacity_(5)
    {}

  private:
    int x_[5];
    int size_;
    int capacity_;
};

#endif
