#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
  public:
    IntArray();
    void push_back(int);
    int size() const;
    int operator[](int) const;
  private:
    int size_;
    int capacity_;
    int x_[5];
};

std::ostream & operator<<(std::ostream &, const IntArray &);

#endif
