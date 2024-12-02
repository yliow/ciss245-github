#include <iostream>

int f(int x)
{
    if (x == 0)
    {
        // base case
        return 42;
    }
    else
    {
        // recursive case
        return f(x - 1);
    }
}

int g(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return g(x - 1) + 1;
    }
}


int main()
{
    //std::cout << f(4) << '\n';
    std::cout << g(3) << '\n';
    return 0;
}
