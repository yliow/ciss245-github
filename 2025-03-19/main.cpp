#include <iostream>

int fact(int n)
{
    if (n == 0)
    {
        std::cout << "base case ... return 1\n";
        return 1;
    }
    else
    {
        std::cout << "recursive ... " << n << '\n';
        int ret = fact(n - 1) * n;
        std::cout << "recursive ... " << n << " ... returning " << ret << '\n';
        return ret;
    }
}
    
int main()
{
    for (int i = 0; i < 6; ++i)
    {
        std::cout << i << ' ' << fact(i) << '\n';
    }
    return 0;
}
