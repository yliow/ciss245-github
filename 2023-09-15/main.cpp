#include <iostream>
#include "test.h"

int main()
{
    // int a = 1;
    // int & b = a;
    // std::cout << a << ' ' << b << '\n'; // 1
    // a = 2;
    // std::cout << a << ' ' << b << '\n'; // 1
    // b = 3;
    // std::cout << a << ' ' << b << '\n'; // 1

    // ref var must be initialized
    //int a = 1; 
    //int & b; // ERROR
    //b = a;   // 

    // int a = 0;
    // int & b = a;
    // int & c = b;
    // std::cout << a << ' ' << b << ' ' << c << '\n';
    // b = 1;
    // std::cout << a << ' ' << b << ' ' << c << '\n';
    // c = 2;
    // std::cout << a << ' ' << b << ' ' << c << '\n';
    
    // int a = 0;
    // int & b = a;
    // const int & c = a;
    // std::cout << a << ' ' << b << ' ' << c << '\n';
    // a = 1;
    // std::cout << a << ' ' << b << ' ' << c << '\n';
    // b = 2;
    // std::cout << a << ' ' << b << ' ' << c << '\n';
    // c = 3;
    // std::cout << a << ' ' << b << ' ' << c << '\n';

    std::cout << max(3, 5) << '\n';
    // as good as
    std::cout << (3 >= 5 ? 3 : 5) << '\n';
    
    return 0;
}
