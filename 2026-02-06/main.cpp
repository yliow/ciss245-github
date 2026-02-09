#include <iostream>
#include <cstddef>

bool isprime(int n)
{
}

void nextprime(int * p)
{
    ++(*p);
    while (!isprime(*p))
    {
        *p = *p + 1;
    }
    
}

int main()
{
    // int x = 42;
    // int * p = &x;
    // int * q = NULL; // nullptr, std::nullptr
    // std::cout << p << ' ' << q << '\n';

    return 0;
}
