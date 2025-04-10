#include <iostream>
#include <string>
#include <vector>
#include "vec2.h"

// template < typename T >
// class vector
// {
// private:
//     T * p_;
//     int size_;
//     int capacity_;
// };

std::ostream & operator<<(std::ostream & cout,
                          const std::vector< int > & v)
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
    vec2< int > v(1, 2);
    std::cout << "v:" << v << '\n';

    vec2< double > u(1.1, 2.2);
    std::cout << "u:" << u << '\n';

    std::vector< int > x;
    std::cout << "x:" << x << '\n';
    x.push_back(5);
    x.push_back(3);
    x.push_back(7);
    std::cout << "x:" << x << '\n';
    x.resize(1);
    std::cout << "x:" << x << '\n';
    x.push_back(99);
    x.push_back(100);
    std::cout << "x:" << x << '\n';
    x.pop_back();
    std::cout << "x:" << x << '\n';
    std::cout << x.front() << '\n';
    std::cout << x.back() << '\n';
    return 0;
}
