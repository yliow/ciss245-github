#include <iostream>

// file: Array.h
template < typename T >
class Array
{
public:
    Array()
        : size_(0), capacity_(1024)
    {
        std::cout << "Array::Array() ... \n";
    }
    Array(int size)
        : size_(size), capacity_(1024)
    {
        std::cout << "Array::Array(int) ... \n";
    }
    int size() const
    {
        return size_;
    }
    T operator[](int i) const
    {
        return x_[i];
    }
private:
    T x_[1024];
    int size_;
    int capacity_;
};

template < typename T >
std::ostream & operator<<(std::ostream & cout, const Array< T > & a)
{
    cout << '{';
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << ' '; // a[i] same as a.operator[](i)
    }
    cout << '}';
    return cout;
}

int main()
{
    Array< int > a;
    Array< int > b(10);
    //Array< double > b;
    
    return 0;
}
