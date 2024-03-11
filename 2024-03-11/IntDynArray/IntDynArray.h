#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

class IntDynArray
{
  public:
    IntDynArray(int);
    int size() const;
  private:
    int * p_;
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntDynArray &);

#endif
