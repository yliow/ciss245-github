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
                  << i << ' '
                  << x[i] << ' ' << int(x[i]) << ' '
                  << y[i] << ' ' << int(y[i]) << '\n';
        x[i] = y[i];
        std::cout << "after ... "
                  << i << ' '
                  << x[i] << ' ' << int(x[i]) << ' '
                  << y[i] << ' ' << int(y[i]) << '\n';
        
        ++i;
    }

    // FIRST CORRECTION
    /*
    int i = 0;
    while (y[i] != '\0')
    {
        std::cout << "before ... "
                  << i << ' '
                  << x[i] << ' ' << int(x[i]) << ' '
                  << y[i] << ' ' << int(y[i]) << '\n';
        x[i] = y[i];
        std::cout << "after ... "
                  << i << ' '
                  << x[i] << ' ' << int(x[i]) << ' '
                  << y[i] << ' ' << int(y[i]) << '\n';
        
        ++i;
    }
    */
    
    // SECOND CORRECTION
    /*
    int i = 0;
    while (y[i] != '\0')
    {
        std::cout << "before ... "
                  << i << ' '
                  << x[i] << ' ' << int(x[i]) << ' '
                  << y[i] << ' ' << int(y[i]) << '\n';
        x[i] = y[i];
        std::cout << "after ... "
                  << i << ' '
                  << x[i] << ' ' << int(x[i]) << ' '
                  << y[i] << ' ' << int(y[i]) << '\n';
        
        ++i;
    }
    x[i] = '\0';
    */
}
