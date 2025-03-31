#include <iostream>
#include <iomanip>

void hanoi(int & step, int n, char from, char helper, char to)
{
    if (n == 1)
    {
        ++step;
        std::cout << std::setw(10) << step << ": "
                  << from << " -> " << to << '\n';
    }
    else
    {
        hanoi(step, n - 1, from, to, helper);
        hanoi(step, 1, from , helper, to);
        hanoi(step, n - 1, helper, from, to);
    }
}

int main()
{
    int n = 0;
    std::cin >> n;
    std::cout << "n:" << n << '\n';
    int step = 0;
    hanoi(step, n, 'A', 'B', 'C');
    return 0;
}
