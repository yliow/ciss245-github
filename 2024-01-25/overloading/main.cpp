#include <iostream>

int max(int x, int y) // real name max__int__int
{
    return (x >= y ? x : y);
}


double max(double x, double y) // real name: max__double__double
{
    return (x >= y ? x : y);
}

int main()
{
    std::cout << max__int__int(3, 5) << '\n'
              << max(3.1, 2.7) << '\n';

    // int x[] = {5, 3, 1};
    // std::cout << max_int_array(x, 3) << '\n';
    // double y[] = {5.5, 3.1, 1.6};
    // std::cout << max_double_array(y, 3) << '\n';
    
    return 0;
}
