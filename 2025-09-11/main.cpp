#include <iostream>

inline
int max(int x, int y)
{
    return (x >= y ? x : y);
}

void helloworld(int x = 42)
{
    std::cout << "hello world ... " << x << "\n";
}

void dttt(int ttt[] = {0,0,0,0,0,0,0,0,0})
{
    //
}

int main()
{
    int ttt[] = {0, 0, 0, 1, 1, 2, 0, 2, 1};
    dttt(ttt);
    
    //std::cout << max(3, 5) << '\n';

    // the real code is
    std::cout << (3 >= 5 ? 3 : 5) << '\n';
    std::cout << max(5, 3) << '\n';

    helloworld();
    helloworld(5);
    
    return 0;
}
