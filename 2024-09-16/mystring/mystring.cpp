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
}
