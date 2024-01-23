#include <iostream> // "iostream.h"
#include <cstring> 

#include "mystring.h"

int main()
{
    char x[100] = "abc";
    std::cout << '[' << x << ']' << '\n';
    std::cout << strlen(x) << '\n';

    for (int i = 0; i < strlen(x); ++i)
    {
        x[i] = ' ';
    }
    std::cout << '[' << x << ']' << '\n';

    std::cout << strlen(x) << '\n';
    std::cout << mystrlen(x) << '\n';

    return 0;
}
