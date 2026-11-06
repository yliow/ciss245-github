#include <iostream>

void hanoi(int n, char from, char helper, char to)
{
    if (n == 1)
    {
        // base case
        std::cout << from << " -> " << to << '\n';
        return 1;
    }
    else
    {
        // recursive case
        hanoi(n - 1, from, to, helper);
        hanoi(1, from , helper, to);
        hanoi(n - 1, helper, from, to);
    }
}


int main()
{
    for (int n = 1; n <= 4; ++n)
    {
        std::cout << "n:" << n << '\n';
        hanoi(n, 'A', 'B', 'C');
        std::cout << '\n';
    }

    return 0;
}
