#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray
{
  public:
    IntArray();
    IntArray(int);
  private:
    int x_[1024];
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntArray &);

#endif
