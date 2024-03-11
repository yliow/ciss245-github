#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

class IntDynArray
{
  public:
    IntDynArray(int);
  private:
    int * p_;
    int size_;
    int capacity_;
};

#endif
