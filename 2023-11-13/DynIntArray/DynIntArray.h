#ifndef DYNINTARRAY_H
#define DYNINTARRAY_H

#include <iostream>

class DynIntArray
{
  public:
    DynIntArray(int);
    int operator[](int) const;
  private:
    int * p_;
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const DynIntArray &);

#endif
