#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

#include <iostream>

class IntDynArray
{
  public:
    IntDynArray(int);
  private:
    int * p_;
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntDynArray &);

#endif
