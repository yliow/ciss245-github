#include <iostream>
#include <cstdlib>
#include <ctime>


void array_println(int x[])
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

void array_rand(int x[])
{
    for (int i = 0; i < 10; ++i)
    {
        x[i] = rand() % 10;
    }
}

void f(int x)
{
    x = 0;
}

void g(int & x)
{
    x = 0;
}

int main()
{
    srand((unsigned int) time(NULL));
    int x[10];
    array_rand(x);
    array_println(x);

    int y = 42;
    f(y);
    std::cout << y << '\n';
    g(y);
    std::cout << y << '\n';
    return 0;
}
