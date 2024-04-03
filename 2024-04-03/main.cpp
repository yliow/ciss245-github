#include <iostream>

class ZeroDivisionError
{};

class IndexError
{};

/*
class vec2d
{
public:
    double operator[](int i)
    {
        if (i < 0 || i > 1)
        {
            throw IndexError();
        }

        return v_[i];
    }
}
*/

int f(int x, int y, int z)
{
    if (y == 0)
    {
        throw ZeroDivisionError();
    }
    // all the checks

    // USEFUL below
    return x / y + z;
}

void g()
{
    std::cout << f(2, 0, 4) << '\n';
}

int main()
{
    try
    {
        g();
    }
    catch (ZeroDivisionError & e)
    {
        std::cout << "ZeroDivisionError caught!!!\n";
        // throw;
    }
    catch (char c)
    {
        std::cout << "exception caught ... value is " << c << '\n';
    }
    
    return 0;
}
