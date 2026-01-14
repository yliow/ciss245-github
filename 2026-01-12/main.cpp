#include <iostream>

int main()
{
/*
  int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cout << (i % 2 == 0 ? '*' : '@');
    }
    std::cout << '\n';
    return 0;
*/

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        // print spaces
        for (int j = 0; j < n - 1 - i; ++j)
        {
            std::cout << ' ';
        }
        // print nonspaces
        if (i % 2 == 0)
        {
            // print alternating patterns
            for (int j = 0; j < i + 1; ++j)
            {
                std::cout << (j % 2 == 0 ? '*' : '-');
            }
        }
        else
        {
            // print dashes
            for (int j = 0; j < i + 1; ++j)
            {
                std::cout << '-';
            }
        }
            
        std::cout << '\n';
    }
    return 0;
}
