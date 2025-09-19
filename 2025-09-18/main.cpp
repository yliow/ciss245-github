#include <iostream>

// void f1(int x)
// {
//     x = 0;
// }

// void f0(int & r)
// {
//     r = 0;
//     return;
// }

// void f2(int * p)
// {
//     *p = 0;
// }

// void f0(int x)
// {
//     ++x;
// }

// void f1(int & r)
// {
//     ++r;
// }

// void f2(int * p)
// {
//     ++(*p);
// }

bool isprime(int n)
{
}

void nextprime(int & x)
{
}

    
int main()
{
    // int x = 42;
    // f0(x);
    // std::cout << x << '\n';

    // x = 42;
    // f1(x);
    // std::cout << x << '\n';

    // x = 42;
    // f2(&x);
    // std::cout<< x << '\n';

    // int x = 0;
    // f0(x);
    // std::cout << x << '\n';

    // x = 0;
    // f1(x);
    // std::cout << x << '\n';

    // x = 0;
    // f2(&x);
    // std::cout << x << '\n';

    // int x = 0, y = 1;
    // swap0(x, y);
    // std::cout << x << ' ' << y << '\n'; // fails... 0 1

    // x = 0; y = 1;
    // swap1(x, y);
    // std::cout << x << ' ' << y << '\n'; // WORKS ... 1 0

    // x = 0; y = 1;
    // swap2(&x, &y);
    // std::cout << x << ' ' << y << '\n'; // WORKS ... 1 0

    int x = 7;

    nextprime(x);
    std::cout << x << '\n'; // should print 11


    return 0;
}
