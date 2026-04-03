#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
  public:
    IntArray()
        : size_(0), capacity_(5)
    {}
    int size() const;
    int capacity() const;
    void push_back(int);
    int operator[](int) const;
    int & operator[](int);
  private:
    int x_[5];
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntArray &);

#endif
