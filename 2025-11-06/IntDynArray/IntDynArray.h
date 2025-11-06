#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

class IntDynArray
{
  public:
    IntDynArray(int); // input is capacity request
    ~IntDynArray();
    IntDynArray(const IntDynArray &);
    IntDynArray & operator=(const IntDynArray &);
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
