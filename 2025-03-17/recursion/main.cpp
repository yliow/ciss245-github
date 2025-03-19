#include <iostream>

int sum(int n)
{
    if (n == 0)
    {
        std::cout << "base case ... return 0\n";
        return 0;
    }
    else
    {
        std::cout << "sum recursive case ... " << n << '\n';
        int ret = sum(n - 1) + n;
        std::cout << "sum recursive case ... return " << ret << '\n';
        return ret;
    }
}

int main()
{
    int s = sum(4);
    std::cout << s << '\n';
    return 0;
}
