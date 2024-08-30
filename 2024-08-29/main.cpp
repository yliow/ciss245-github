#include <iostream>

void f(int x)
{
    x = 1;
}

int main()
{
    int x = 0;

    std::cout << "before ... " << x << '\n';
    f(x);
    std::cout << "after ... " << x << '\n';
    
    return 0;
}
