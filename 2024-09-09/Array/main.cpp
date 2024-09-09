#include <iostream>
#include "Array.h"

int main()
{
    // int x[5] = {2, 3, 5, 7};
    // print_array(x, 0, 5);
    // print_array(x, 0, 3);
    // print_array(x, 1, 4);
    // print_array(x, 1, 8);

    // std::cout << linearsearch(x, 0, 3, 2) << '\n';
    // std::cout << linearsearch(x, 0, 5, 7) << '\n';
    // std::cout << linearsearch(x, 0, 2, 7) << '\n';

    // std::cout << max(x, 0, 5) << '\n';
    // std::cout << max(x, 0, 3) << '\n';

    int y[5];
    int y_size = 0;
    int y_capacity = 5;
    print_array(y, 0, y_size);
    push_back(y, y_size, y_capacity, 3);
    print_array(y, 0, y_size);

    push_back(y, y_size, 4);
    print_array(y, 0, y_size);

    push_back(y, y_size, 0);
    print_array(y, 0, y_size);
    
    push_back(y, y_size, 1);
    print_array(y, 0, y_size);

    push_back(y, y_size, 42);
    print_array(y, 0, y_size);

    push_back(y, y_size, 43);
    print_array(y, 0, y_size);
    
    push_back(y, y_size, 44);
    print_array(y, 0, y_size);

    return 0;
}

