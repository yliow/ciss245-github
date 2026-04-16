#include <iostream>
#include <vector> // basically it's our IntDynArray class
#include <string>

// but in template form
// template < typename T >
// class vector
// {
// public:
//    int size_;
//    int capacity_;
//    T * p_;
// };

template < typename T >
std::ostream & operator<<(std::ostream & cout, const std::vector< T > & v)
{
    cout << '{';
    std::string delim;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << delim << v[i];
        delim = ", ";
    }
    cout << '}';
    return cout;
}

int main()
{
    std::vector< int > v;
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    v.resize(3);
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    v[0] = 2;
    v[1] = 5;
    v[2] = 99;
    for (int i = 0; i < 3; ++i)
    {
        std::cout << v[i] << '\n';
    }
    std::cout << v.front() << '\n';
    std::cout << v.back() << '\n';

    v.push_back(-1);
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << '\n';
    }
    v.pop_back();
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    std::cout << v << '\n';

    std::vector< double > u(5, 1.1);
    std::cout << u.size() << ' ' << u.capacity();
    std::cout << u << '\n';

    std::vector< std::vector< double > > m(3, std::vector< double >(5, 1.0));
    for (int r = 0; r < m.size(); ++r)
    {
        std::cout << m[r] << '\n';
    }
    
    return 0;
}
