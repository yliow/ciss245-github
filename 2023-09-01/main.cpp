#include <iostream>
#include <cstdlib>
#include <vector>

const int SIZE = 1000;

void rand_array(int x[], int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        x[i] = rand() % 20;
    }
}

void change(int & i)
{
    i = 0;
}

void println(int x[], int start,  int end)
{
    for (int i = start; i < end; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';    
}

int linearsearch(int x[], int start, int end,
                 int target)
{
    for (int i = start; i < end; ++i)
    {
        if (x[i] == target) return i;
    }
    return -1;
}

int main()
{
    srand(0);
    
    int x[SIZE];
    x[0] = 42;
    x[1] = 1;
    x[2] = -4;
    println(x, 0, 10);
    rand_array(x, 0, 10);
    println(x, 0, 10);

    // int i = 42;
    // change(i);
    // std::cout << i << '\n';
    
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
