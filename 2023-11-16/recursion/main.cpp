#include <iostream>

// void f(int n)
// {
//     std::cout << n << '\n';
//     char c;
//     std::cin >> c;
//     f(n);
// }

void f(int n)
{
    if (n <= 0)
    {
        // base case
        std::cout << "time to stop\n";
    }
    else
    {
        // recursive case
        std::cout << n << '\n';
        char c;
        std::cin >> c;
        f(n - 1);
    }
}


int main()
{
    f(5);
    return 0;
}
