#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cout << (i % 2 == 0 ? '*' : '@');
    }
    std::cout << '\n';
    return 0;
}
