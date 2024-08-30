#include <iostream>

void f(int x)
{
    std::cout << "f's x:" << x << '\n';
    x = 42;
    std::cout << "f's x:" << x << '\n';
}

int main()
{
    int x = 0;
    std::cout << "main's x:" << x << '\n';
    f(x);
    std::cout << "main's x:" << x << '\n';
}
