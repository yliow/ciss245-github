#include <iostream>

int main()
{
    int i = 42;
    int & j = i;
    std::cout << i << ' ' << j << '\n';
    j = 0;
    std::cout << i << ' ' << j << '\n';

    const int & k = i;
    std::cout << i << ' ' << j << ' ' << k << '\n';
    i = 1;
    std::cout << i << ' ' << j << ' ' << k << '\n';
    k = 2;
    
    return 0;
}
