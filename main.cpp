#include <iostream>

int max(int x, int y)
{
    return (x >= y ? x : y);
}

int main()
{
    int m = max(3, 5);
    std::cout << m << '\n';
}
