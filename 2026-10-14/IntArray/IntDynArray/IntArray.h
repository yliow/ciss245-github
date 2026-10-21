#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntDynArray
{
  public:
    IntDynArray(int); // int is the size and capacity
    int size() const;
    int operator[](int) const;
    int & operator[](int);
  private:
    int * p_;
    int size_;
    int capacity_; 
};
std::ostream & operator<<(std::ostream &, const IntDynArray &);
#endif
