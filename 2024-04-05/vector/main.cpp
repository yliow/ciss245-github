#include <iostream>
#include "vector.h"

int main()
{
    vector< int > v(3);
    std::cout << v << '\n';

    for (int i = 42; i < 44; ++i)
    {
        v.push_back(i);
        std::cout << v << '\n';
    }
    
    return 0;
}
