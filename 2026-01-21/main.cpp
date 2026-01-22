#include <iostream>

void copy(int x[], int t[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        x[i] = t[i];
    }
}

void print(int x[], int size)
{
    std::cout << '|';
    for (int i = 0; i < size; ++i)
    {
        std::cout << (x[i] == 0 ? ' ' : 'X');
    }
    std::cout << '|';
}

void update(int x[], int n)
{
    int bits[8] = {0, 1, 0, 1, 1, 0, 1, 0};
    //int bits[8] = {0, 1, 1, 1, 1, 1, 1, 1};
    int t[2 * 500 + 1] = {0};

    for (int i = 1; i < 2 * n; ++i)
    {
        int a = x[i - 1];
        int b = x[i];
        int c = x[i + 1];
        int d = a * 4 + b * 2 + c;
        t[i] = bits[d];
    }
    t[0] = x[0];
    t[2 * n] = x[2 * n];
    copy(x, t, 2 * n + 1);
}

int main()
{
    int x[2 * 500 + 1] = {0}; // cellular automata
    int n; // max of 500 .. the cellular automata is x[0 .. 2 * n]
    std::cin >> n;
    x[n] = 1;
    
    print(x, 2 * n + 1);
    std::cout << '\n';

    for (int epoch = 0; epoch < 2 * n + 1; ++epoch)
    {
        update(x, n);
        print(x, 2 * n + 1);
        std::cout << '\n';
    }

    std::cout << 2 * 2 * 2 << '\n';
    std::cout << (1 << 3) << '\n';
    return 0;
}
