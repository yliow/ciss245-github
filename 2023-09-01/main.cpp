#include <iostream>
#include <cstdlib>
#include <vector>

const int SIZE = 1000;

void rand_array(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 20;
    }
}

int main()
{
    srand(0);
    
    int x[SIZE];
    x[0] = 42;
    x[1] = 1;
    x[2] = -4;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';

    rand_array(x, 10);
    
    // std::vector< int > v(10);
    // v[0] = 42;
    // v[1] = 1;
    // v[2] = -4;
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << v[i] << ' ';
    // }
    // std::cout << '\n';
        
    return 0;
}
