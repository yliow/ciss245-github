#ifndef DYNINTARRAY_H
#define DYNINTARRAY_H

#include <iostream>

class DynIntArray
{
  public:
    DynIntArray(int);
    int operator[](int) const;
    int size() const;
    int operator[](int) const;
  private:
    int * p_; // IntArray int x_[1024]
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const DynIntArray &);

#endif
