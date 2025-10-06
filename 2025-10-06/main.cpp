#include <iostream>
#include "array.h"

int main()
{
    int x[] = {5, 3, 1, 2, 4, 4, 6, 0};
    //print_arr(x, 3, 7);
    print_arr(&x[3], &x[7]);

    int * p = linearsrch(&x[3], &x[7], 4);
    std::cout << p << ' ' << (*p) << '\n';
    p = linearsrch(&x[3], &x[7], 99999);
    std::cout << p << '\n';

    int i = count(&x[3], &x[7], 4);
    std::cout << i << '\n';
    i = count(&x[3], &x[7], 9);
    std::cout << i << '\n';

    bubblesort(&x[0], &x[8]);
    print_arr(&x[0], &x[8]);
    
    return 0;
}
