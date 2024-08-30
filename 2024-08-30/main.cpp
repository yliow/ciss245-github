#include <iostream>

void f(int x)
{
    x = 42;
}

int main()
{
    int x = 0;
    std::cout << x << '\n';
    f(x);
    std::cout << x << '\n';
}
