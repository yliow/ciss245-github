#include <iostream>

int f(int x, int y, int z)
{
    if (y == z)
    {
        throw 0;
    }
    return x / (y - z);
}

int main()
{
    try
    {
        std::cout << f(5, 3, 3) << '\n';
        //
        //
        //
        //
    }
    catch (int e)
    {
        std::cout << "caught error code 0 ...\n";
        std::cout << "but can continue ...\n";
    }
    catch (double e)
    {
        std::cout << "caught error code double error ...\n";
        std::cout << "but can continue ...\n";
    }
    
    return 0;
}
