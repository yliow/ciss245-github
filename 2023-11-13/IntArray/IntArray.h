#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray
{
  public:
    IntArray();
    IntArray(int);
    int size() const;
    void resize(int size);
    int operator[](int) const;
    int & operator[](int);
    void push_back(int);
    void bubblesort();
    void selectionsort();
    void insertionsort();
  private:
    int x_[5];
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntArray &);
void bubblesort(IntArray & a);

#endif