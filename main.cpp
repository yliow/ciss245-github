#include <iostream>

int main()
{
    int x = 42;
    int y = 99;
    int * p = &x;
    std::cout << (*p) << '\n';
    (*p) = 43;
    p = &y;

    const int * q = &x;
    //(*q) = 44;
    x = 44;
    q = &y;

    int * const r = &x;
    *r = 45;
    //r = &y;

    const int * const s = &x;
    //(*s) = 46;
    //s = &y;

    // const int * const s
    // <----------------

    return 0;
}
