#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

class IntDynArray
{
  public:
    IntDynArray(int);
    ~IntDynArray();
    IntDynArray(const IntDynArray &);
    IntDynArray & operator=(const IntDynArray &);
    int size() const;
    int capacity() const;
    int operator[](int) const;
    void push_back(int);
  private:
    int * p_;
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntDynArray &);

#endif
