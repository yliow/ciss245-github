#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
  public:
    IntArray(); // by default the array modeled by this object has no values
    // i.e., set size_ to 0
    // all values (of the member variables are automatic. don't need
    // a dtor
    int operator[](int) const;
    int & operator[](int);
    int size() const;
    void resize(int);
    void push_back(int);
  private:
    int a_[5];
    int size_;
    int capacity_;
};

std::ostream & operator<<(std::ostream &, const IntArray &);

#endif
