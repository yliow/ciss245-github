#include <iostream>
#include "Array.h"

int main()
{
    int x = 0, y = 1;
    swap< int >(x, y);
    std::cout << x << ' ' << y << '\n';

    double a = 1.1, b = 2.2;
    swap< double >(a, b);
    std::cout << a << ' ' << b << '\n';

    Array< int > arr;
    init< int >(arr, 5);
    std::cout << arr << '\n';

    push_back(arr, 2);
    std::cout << arr << '\n';
    push_back(arr, 5);
    std::cout << arr << '\n';
    push_back(arr, 1);
    std::cout << arr << '\n';
    push_back(arr, 3);
    std::cout << arr << '\n';
    push_back(arr, 6);
    std::cout << arr << '\n';
    push_back(arr, 99999);
    std::cout << arr << '\n';


    
    //Array< double > arr1;
    
    return 0;
}
