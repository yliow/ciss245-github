#include <iostream>

// void f(int n)
// {
//     std::cout << n << '\n';
//     char c;
//     std::cin >> c;
//     f(n);
// }

// void f(int n)
// {
//     if (n <= 0)
//     {
//         // base case
//         std::cout << "time to stop\n";
//     }
//     else
//     {
//         // recursive case
//         std::cout << n << '\n';
//         char c;
//         std::cin >> c;
//         f(n - 1);
//     }
// }

// void f(int n)
// {
//     if (n <= 0)
//     {
//         // base case
//         std::cout << "time to stop\n";
//     }
//     else
//     {
//         // recursive case
//         std::cout << n << '\n';
//         //char c;
//         //std::cin >> c;
//         f(n + 1);
//     }
// }

// void f(int n)
// {
//     if (n <= 0)
//     {
//         // base case
//         std::cout << "time to stop\n";
//     }
//     else
//     {
//         // recursive case
//         std::cout << n << '\n';
//         char c;
//         std::cin >> c;
//         f(n - 2);
//     }
// }

int sum(int n)
{
    if (n == 0)
    {
        std::cout << "sum n = 0 ... returning 0\n";
        return 0;
    }
    else
    {
        // recursive case
        int t = sum(n - 1);
        //std::cout << "t:" << t << '\n';
        std::cout << "sum n = " << n << " ... returning " << t  + n << "\n";
        return t + n;
    }
}

// compute n! recursively

int main()
{
    //f(5);
    int ret = sum(5);
    std::cout << "final:" << ret << '\n';
    return 0;
}