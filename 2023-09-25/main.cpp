#include <iostream>

int main()
{
    int x[] = {2, 3, 5, 7, 11, 13};
    int * p = &x[5];
    std::cout << p << ' ' << *p << '\n';
    *p = 17;
    std::cout << p << ' ' << *p << ' ' << x[5] << '\n';
    
    return 0;
}
