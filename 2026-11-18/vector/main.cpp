#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template < typename T >
std::ostream & operator<<(std::ostream & cout, const std::vector< T > & v)
{
    cout << '{';
    std::string delim = "";
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout << delim;
    //     cout << v[i];
    //     delim = ", ";
    // }

    for (typename std::vector< T >::const_iterator p = v.begin();
         p != v.end(); ++p)
    {
        cout << delim;
        cout << *p;
        delim = ", ";
    }
    cout << '}';
    return cout;
}

// class C
// {
//     class D
//     {
//     };
// };

int main()
{
    std::vector< int > v;
    std::cout << v.size() << '\n';
    std::cout << v.capacity() << '\n';
    v.resize(5);
    std::cout << v.size() << '\n';
    std::cout << v.capacity() << '\n';
    v[0] = 42;
    v[1] = -1;
    std::cout << v << '\n';
    v.push_back(999);
    std::cout << v << '\n';

    std::vector< int > w {1, 2, 3};
    std::cout << w << '\n';

    std::cout << "v:" << v << '\n';
    std::cout << "w:" << w << '\n';
    v.swap(w);
    std::cout << "v:" << v << '\n';
    std::cout << "w:" << w << '\n';
    //IntPointer p; // p.p_

    std::vector< double > x;
    x.resize(3);
    x[0] = 1.1;
    std::cout << x << '\n';

    std::vector< int >::iterator p = v.begin();
    //or std::vector< int >::const_iterator
    std::cout << "v:" << v << '\n';
    *p = 42;
    std::cout << "v:" << v << '\n';
    ++p;
    *p = 43;
    std::cout << "v:" << v << '\n';
    p = v.end();
    --p;
    *p = 44;
    std::cout << "v:" << v << '\n';

    // std::vector< int >::iterator q = std::find(v.begin(), v.end(), 42);
    auto q = std::find(v.begin(), v.end(), 42);
    std::cout << *q << '\n';
    q = std::find(v.begin(), v.end(), 99);
    if (q == v.end())
    {
        std::cout << 99 << " cannot be found\n";
    }

    q = std::find(v.begin(), v.end(), 42);
    v.erase(q);
    std::cout << "v:" << v << '\n';
    return 0;
}
