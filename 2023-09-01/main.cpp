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

int max(int x[], int start, int end)
{
    int running_max = x[0];
    for (int i = start + 1; i < end; ++i)
    {
        if (x[i] > running_max)
        {
            running_max = x[i];
        }
    }
    return running_max;
}

void bubblesort(int x[], int start, int end)
{
    for (int i = end - 2; i >= start; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
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

    int target;
    std::cin >> target;
    std::cout << linearsearch(x, 0, 10, target)
              << '\n';

    std::cout << max(x, 0, 10) << '\n';

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
