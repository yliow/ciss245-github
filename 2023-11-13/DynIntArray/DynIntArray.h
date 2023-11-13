#ifndef DYNINTARRAY_H
#define DYNINTARRAY_H

#include <iostream>

class DynIntArray
{
  public:
    DynIntArray(int);
    ~DynIntArray();
    DynIntArray(const DynIntArray & a);
    int size() const;
    int operator[](int) const;
    int & operator[](int);
  private:
    int * p_; // IntArray int x_[1024]
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const DynIntArray &);

#endif
