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
    /*
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
    */
    
    // FIRST CORRECTION
    /*
    int i = 0;
    while (y[i] != '\0') // <<<< CHANGE x TO y
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
    // /*
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
    x[i] = '\0'; // <<<< ADD '\0' TO x AFTER THE COPY OPERATION
    // */
}

void mystrcat(char s[], char t[])
{
    int i = 0;
    int j = mystrlen(s);
    while (t[i] != '\0')
    {
        s[j++] = t[i++];
        //++i;
        //++j;
    }
    s[j] = '\0';
}

int mystrcmp(char s[], char t[])
{
    int n0 = mystrlen(s);
    int n1 = mystrlen(t);
    if (n0 != n1)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < n0; ++i)
        {
            if (s[i] != t[i])
            {
                return 1;
            }
        }
        return 0;
    }
}

