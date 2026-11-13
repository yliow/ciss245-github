#include <iostream>

// struct X
// {
//     int x;
//     char y;
// };

// struct Y
// {
//     X * a;
//     int x;
//     char y;
// };

void linearsearch(int x[], int n, int target)
{
    //....
}

void linearsearch(int x[], int start, int end, int target)
{
    //....
    for (int i = start; i < end; ++i)
    {
        x[i] ,....... *(&x[0] + i)
    }
}

void linearsearch(int * start, int * end, int target)
{
    for (int * p = start; p < end; ++p)
    {
        *p
    }
}

int main()
{
    // Y y;
    // y.a.x = 0;
    // y.x = 1;

    // Y y;
    // (y.a)->x;

    int * p;
    p = new int[10];

    // p points to 1st value of array
    for (int i = 0; i < 10; ++i)
    {
        *(p + i) = 1;
    }
    for (int i = 0; i < 10; ++i)
    {
        p[i] = 1;
    }

    // pointer iteration ... not index iteration
    for (int * q = p; q < p + 10; ++q)
    {
        *q = 1;
    }
    
    return 0;
}
