#include <iostream>

void f(int x[])
{
    // std::cout << sizeof(x) << '\n';
}

void bubblesort(int ** start, int ** end)
{
}

void my_new(int ** x)
{
    *x = new int; 
}

void set_zero(int * p)
{
    *p = 0;
}

int main()
{
    // int x[5];
    // std::cout << sizeof(x) << '\n';
    // f(x);

    int * q; // = new int;
    my_new(&q);

    int i;
    set_zero(&i);
    // i is 0
    
    std::cout << (*q) << '\n';
    delete q;
    // int x[] = {5, 3, 1, 2, 4, 7, 6};
    // int * p[8];
    // for (int i = 0; i < 8; ++i)
    // {
    //     p[i] = &x[i];
    // }
    
    // bubblesort(&p[0], &p[8]);
    
    return 0;
}
