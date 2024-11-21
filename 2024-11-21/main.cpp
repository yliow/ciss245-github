#include <iostream>

int f(int x, int y, int z)
{
    if (z == 0)
    {
        throw 42;
    }
    if (x < 0)
    {
        throw 41;
    }
        
    return x + y / z;
}

int g(int x, int y, int z)
{
    return f(x, y, z);
}

int main()
{
    try
    {
        std::cout << f(-1, 2, 3) << '\n';
        std::cout << f(1, 2, 0) << '\n';
    }
    catch (int i)
    {
        std::cout << "caught integer " << i << '\n';
    }
    
    return 0;
}
