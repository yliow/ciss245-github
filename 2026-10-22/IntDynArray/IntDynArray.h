#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

template < typename T >
class DynArray
{
  public:
    IntDynArray(int); // int is the size and capacity
    IntDynArray(const IntDynArray &);
    ~IntDynArray();
    int size() const;
    void resize(int);
    int capacity() const;
    int operator[](int) const;
    int & operator[](int);
    IntDynArray & operator=(const IntDynArray &);
    void push_back(int);
  private:
    T * p_;
    int size_;
    int capacity_; 
};

std::ostream & operator<<(std::ostream &, const IntDynArray &);
#endif
