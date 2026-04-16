#include <iostream>

class DivisionByZeroError
{};

void g(int x, int y)
{
    if (y == 0) throw DivisionByZeroError();
    // suppose g should not get a x = 0
    if (x == 0) throw 1.1;
    if (x < 0) throw 'A';
    if (y < 0) throw true;
    int z = x / y;
}

void f()
{
    int x = 5, y = 0;
    try
    {
        g(x, y);
    }
    catch (DivisionByZeroError & e)
    {
        std::cout << "catch an DivisionByZeroError from g() ... " << "\n";
    }
    catch (double e)
    {
        std::cout << "catch a double from g() ... e:" << e << "\n";
    }
}


int main()
{
    try
    {
        f();
    }
    catch (char e)
    {
        std::cout << "main() caught a char from f() ... e:" << e << '\n';
    }
    
    return 0;
}
