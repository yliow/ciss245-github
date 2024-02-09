#include <iostream>

void f(int * p)
{
    ++(*p);
    std::cout << *p << '\n'; 
    int * q = new int[10000000];
    f(p);
}

int main()
{
    int i = 0;
    f(&i);
    return 0;
}
