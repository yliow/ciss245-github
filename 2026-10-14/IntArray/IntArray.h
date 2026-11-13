#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray
{
  public:
    IntArray(int);
    void resize(int);
    int size() const;
    int operator[](int) const;
    int & operator[](int);
    bool operator==(const IntArray &) const;
    void push_back(int);
  private:
    int x_[10]; // x_ holds at most 10 values, i.e. capacity = 10
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntArray &);

#endif
