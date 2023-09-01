#include <iostream>

const int SIZE = 1000;

int main()
{
    int x[SIZE];

    x[0] = 42;
    x[1] = 1;
    x[2] = -4;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    
    return 0;
}
