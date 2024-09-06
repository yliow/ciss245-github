#include <iostream>
#include "Array.h"

int main()
{
    int x[5] = {2, 3, 5, 7};
    print_array(x, 0, 5);
    print_array(x, 0, 3);
    print_array(x, 1, 4);
    print_array(x, 1, 8);

    std::cout << linearsearch(x, 0, 3, 2) << '\n';
    std::cout << linearsearch(x, 0, 5, 7) << '\n';
    std::cout << linearsearch(x, 0, 2, 7) << '\n';

    std::cout << max(x, 0, 5) << '\n';
    
    return 0;
}

