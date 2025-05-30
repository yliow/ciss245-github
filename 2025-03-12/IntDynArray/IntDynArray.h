#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

#include <iostream>

class IntDynArray
{
  public:
    IntDynArray();
    IntDynArray(const IntDynArray &);
    ~IntDynArray();
    int size() const;
    int operator[](int) const;
    int & operator[](int);
    void resize(int);
    IntDynArray & operator=(const IntDynArray &);
  private:
    int * p_;
    int size_;
    int capacity_;
};

std::ostream& operator<<(std::ostream &, const IntDynArray &);

#endif
