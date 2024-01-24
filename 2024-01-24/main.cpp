#include <iostream>

// inline int max(int x, int y)
// {
//     return (x >= y ? x : y);
// }

void printhead(int n = 1)
{
    std::cout << n << '\n';
}


int main()
{
    // int m = max(3, 5); // int m = (3 >= 5 ? 3 : 5)
    // std::cout << m << '\n';

    printhead();
    printhead(42);
    
    return 0;
}
