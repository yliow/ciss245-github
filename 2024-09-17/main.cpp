#include <iostream>

int main()
{
    std::cout << 3.141 + 0.1 << '\n';
    std::cout << 3.141 - 0.1 << '\n';
    std::cout << 3.141 / 0.1 << '\n';
    std::cout << 3.141 * 0.1 << '\n';
    //std::cout << 3.141 % 0.1 << '\n'; <<<< NO & for doublesx

    std::cout << 3.141f + 0.1f << '\n';

    double x, y;
    std::cin >> x >> y;
    std::cout << x << " + " << y << " = " << x + y << '\n';
    
    return 0;
}
