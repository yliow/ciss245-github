#include <iostream>
#include "mystring.h"

int mystrlen(char x[])
{
    int i = 0;
    while (x[i] != '\0')
    {
        ++i;   
    }
    return i;
}

void mystrcpy(char x[], char y[])
{
    int i = 0;
    while (x[i] != '\0')
    {
        std::cout << "before ... "
                  << i << ' ' << x[i] << ' ' << y[i] << '\n';
        x[i] = y[i];
        std::cout << "after ... "
                  << i << ' ' << x[i] << ' ' << y[i] << '\n';
        
        ++i;
    }
}
