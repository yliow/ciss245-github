#include <iostream>

int main()
{
    int * p = new int[10]; // memory allocation for p

    // 240 style index iteration
    // int s = 0;
    // for (int i = 0; i < 10; ++i)
    // {
    //     s += p[i]; // *(p + i);
    // }

    int s = 0;
    for (int * q = p; q < p + 10; ++q)
    {
        s += *q;
    }
    
    delete [] p; // memory deallocation for p
    return 0;
}
