#include <iostream>

// inline
// int max(int x, int y)
// {
//     return (x >= y ? x : y);
// }

// inline
// int min(int x, int y)
// {
//     return (x <= y ? x : y);
// }

// int main()
// {
//     std::cout << max(3, 5) << '\n';
//     std::cout << max(10, -1) << '\n';

//     return 0;
// }

// #include <iostream>

// void printHeads(int n = 1)
// {
//     std::cout << n << '\n';
// }

// int main()
// {
//     printHeads();
//     printHeads(42);
//     return 0;
// }


#include <iostream>

int max(int x, int y) // real name is max_int_int (name mangling)
{
    return (x >= y ? x : y);
}

double max(double x, double y) // real name is max_double_double
{
    return (x >= y ? x : y);
}

// max of char
// max of an array with len ....
int main()
{
    std::cout << max(3, 5) << '\n'
              << max(5, 3) << '\n'
              << max(3.14, 2.718) << '\n';

    return 0;
}
