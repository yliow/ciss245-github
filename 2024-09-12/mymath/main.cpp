#include <iostream>

int max(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    std::cout << max(3, 5) << '\n';
    return 0;
}
