#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a;
    std::cout << a << '\n';

    IntArray b(5);
    std::cout << b << '\n';

    std::cout << b[2] << '\n';
    b[2] = 42;
    std::cout << b << '\n';
    
    std::cout << b[100] << '\n';

    b.resize(3);
    std::cout << b << '\n';

    b.push_back(10);
    std::cout << b << '\n';
    
    b.push_back(7);
    std::cout << b << '\n';
    
    b.push_back(3);
    std::cout << b << '\n';

    //bubblesort(a);
    std::cout << "bubblesort on " << b << '\n';
    b.bubblesort();
    std::cout << b << '\n';
    //bubblesort(b);

    b[0] = 8;
    b[1] = 7;
    b[2] = 6;
    b[3] = 5;
    b[4] = 4;
    std::cout << b << '\n';

    std::cout << "selectionsort on " << b << '\n';
    b.selectionsort();
    
    return 0;
}
