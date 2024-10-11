#include <iostream>

// WRONG!!!
// void setzero(int i)
// {
//     i = 0;
// }

// void setzero(int & i)
// {
//     i = 0;
// }

void setzero(int * i)
{
    *i = 0;
}

void set_ptr_to_zero(int ** q)
{
    *q = NULL;
}

int main()
{
    // int x;
    // int * px = &x;
    // std::cout << x << ' ' << &x << ' ' << px << ' ' << &px << '\n';

    // int ** ppx = &px;
    // std::cout << px << ' ' << &px << ' ' << ppx << ' ' << &ppx << '\n';

    int i = 42;
    //setzero(i);
    setzero(&i);
    std::cout << i << '\n';

    int * p = new int;
    std::cout << p << '\n';    
    set_ptr_to_zero(&p);
    std::cout << p << '\n';
    
    return 0;
}
