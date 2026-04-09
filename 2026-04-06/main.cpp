#include <iostream>

void hanoi(int n, char from, char helper, char to)
{
    if (n == 1)
    {
        std::cout << from << " -> " << to << '\n';
    }
    else
    {
        hanoi(n - 1, from, to, helper);
        hanoi(1, from, helper, to);
        hanoi(n - 1, helper, from, to);
    }
}

// void print(int x[], int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         std::cout << x[i] << ' ';
//     }
//     std::cout << '\n';
// }

// recursive version of above println

// void println(int x[], int start, int end)
// {
//     for (int i = start; i < end; ++i)
//     {
//         std::cout << x[i] << ' ';
//     }
//     std::cout << '\n';
// }

// recursive version of above println
void println(int x[], int start, int end)
{
}

void println(int * start, int * end)
{
    for (int * p = start; p < end; ++p)
    {
        std::cout << (*p) << ' ';
    }
    std::cout << '\n';
}

// recursive version of above println

int main()
{
    int x[] = {1, 2, 3};
    hanoi(4, 'A', 'B', 'C');

    int x[5] = {7, 5, 2, 4, 6};
    println(x, 2, 5);
    return 0;
}
