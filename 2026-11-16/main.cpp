#include <iostream>

int f(int x, int y, int z)
{
    //  user should not enter 0 for z
    if (x == y)
    {
        throw 42; // int value indicate division by zero
    }
    if (z == 0)
    {
        throw 3.14;
    }
    /*
      user
      errorcode = 1 for division by 0
      errorcode = 2 for z=0

      if (x == y) throw 1;
      if (z == 0) throw 2;
     */
    
    return z / (x - y);
}

int g(int x, int y, int z)
{
    // try
    // {
    //     return f(x, y, z);
    // }
    // catch (int error)
    // {
    //     std::cout << "g ... caught int\n";
    //     return 0;
    // }
    // catch (double error)
    // {
    //     std::cout << "g ... caught double\n";
    //     return 0;
    // }

    return f(x, y, z);
}

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;
    try
    {
        std::cout << g(x, y, z) << '\n';
    }
    catch (int error)
    {
        std::cout << "division by zero\n";
    }
    catch (double error)
    {
        std::cout << "z=0 error\n";
    }
    return 0;
}
