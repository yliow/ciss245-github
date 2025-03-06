#include <iostream>
#include "IntArray.h"

int main()
{
    IntArray a; // a models an int array of size 5
    std::cout << a << '\n'; // prints {}

    // a.push_back(3); // a <----> {3}
    // std::cout << a << '\n'; // prints {3}

    // a.push_back(2); // a <----> {3, 2}
    // std::cout << a << '\n'; // prints {3, 2}

    // a.push_back(4);
    // a.push_back(10);
    // a.push_back(15);
    // a.push_back(16); // a <----> {3, 2, 4, 10, 15} ... 16 does NOT go into array

    // std::cout << a[0] << '\n'; // print 3
    // a[0] = 42; // a <-----> {42, 2, 4, 10, 15}

    // a.pop_back(); // a <-----> {42, 2, 4, 10}
    // std::cout << a.size() // prints 4
    
    return 0;
}
