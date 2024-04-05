#ifndef VECTOR_H
#define VECTOR_H

template < typename T >
class vector
{
  public:
    vector(int capacity)
        : p_(new T[capacity]), size_(0), capacity_(capacity)
    {}
    T * p_;
    int size_;
    int capacity_;
};
#endif
