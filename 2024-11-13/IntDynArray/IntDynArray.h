#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

#include <iostream>

class IntDynArray
{
  public:
    IntDynArray(int);
    ~IntDynArray();
    void push_back(int);
    int size() const;
    int capacity() const;
    int operator[](int) const;
  private:
    int * p_;
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntDynArray &);

#endif
