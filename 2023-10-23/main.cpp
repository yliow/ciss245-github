#include <iostream>

// file: Array.h (no cpp files for template code)

template < typename T >
struct Array
{
    T x[1024]; // not flexible ... correct is "T * x"
    int size;
    int capacity;
};

template < typename T >
void init(Array< T > & a)
{
    a.size = 0;
    a.capacity = 1024;
}

template < typename T >
void println(const Array< T > & a)
{
    for (int i = 0; i < a.size; ++i)
    {
        std::cout << a.x[i] << ' ';
    }
    std::cout << '\n';
}

template < typename T >
void push_back(Array< T > & a, T v)
{
    if (a.size < a.capacity)
    {
        a.x[a.size] = v;
        ++a.size;
    }
    else
    {
        std::cout << "Array is full ... overflow error\n";
    }
}

int main()
{
    Array< int > a;
    init(a);
    println(a);
    push_back(a, 42);
    println(a);
    push_back(a, 7);
    println(a);
    
    Array< float > b;
    init(a);

    return 0;
}
