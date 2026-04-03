// IntDynArray.h
#ifndef INTDYNARRAY_H
#define INTDYNARRAY_H

class IntDynArray
{
  public:
    IntDynArray(int capacity)
        : p_(new int[capacity]), size_(0), capacity_(capacity)
    {}
    IntDynArray(const IntDynArray &);
    ~IntDynArray();
    void push_back(int);
    int operator[](int) const;
    int & operator[](int);
    int size() const;
    int capacity() const;
    IntDynArray & operator=(const IntDynArray &);
  private:
    int * p_;
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream&, const IntDynArray &);

#endif
