#include <iostream>

int max(int x, int y);

int main()
{
    std::cout << max(3, 5) << '\n';
    std::cout << max(5, 3) << '\n';
    std::cout << max(3, 3) << '\n';

    return 0;
}

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
