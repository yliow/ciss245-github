#include <iostream>

int main()
{
    IntDynArray a(5);
    // want a to expand beyond capacity
    std::cout << a << '\n';

    return 0;
}
