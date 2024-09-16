#include <iostream>
#include "mystring.h"

int main()
{
    char x[10] = {'c', 'a', 't', '\0'}; // "cat";
    std::cout << "x: [" << x << "] ";
    for (int i = 0; i < 3; ++i)
    {
        std::cout << int(x[i]) << ' ';
    }
    std::cout << '\n';

    std::cout << mystrlen(x) << '\n';

    char y[10] = "apple";
    std::cout << mystrlen(y) << '\n';

    mystrcpy(y, x);
    std::cout << "x:" << x << '\n';
    std::cout << "y:" << y << '\n';
    return 0;
}
