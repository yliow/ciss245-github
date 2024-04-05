#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <string>

template < typename T >
class vector
{
  public:
    vector(int capacity)
        : p_(new T[capacity]), size_(0), capacity_(capacity)
    {}
    ~vector()
    {
        delete [] p_;
    }
    int size() const
    {
        return size_;
    }
    T operator[](int i) const
    {
        return p_[i];
    }
    T & operator[](int i)
    {
        return p_[i];
    }
    void push_back(const T & e)
    {
        p_[size_++] = e;
    }
    /* vector(const vector< T >& v) */
    /* { */
    /*     ... */
    /* } */
    /* const vector< T > & operator=(const vector< T > & v) */
    /* { */
    /*     ... */
    /* } */
    T * p_;
    int size_;
    int capacity_;
};

template < typename T >
std::ostream & operator<<(std::ostream & cout,
                          const vector< T > & v)
{
    cout << '{';
    std::string delim = "";
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << delim << v[i];
        delim = ", ";
    }
    cout << '}';
    return cout;
}
#endif
