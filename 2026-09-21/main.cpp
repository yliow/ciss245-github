#include <iostream>

int sum(int n)
{
    int s = 0;
    int * i = new int;
    for (*i = 0; *i <= n; ++(*i))
    {
        s += *i;
    }
    //delete i;
    return s;
}

int main()
{
    // int x[10];
    // int i = 10;
    // int j = x[i];
    
    std::cout << sum(10) << '\n';
    // int * p;
    // p = new int;
    // std::cout << (unsigned long long) p << '\n';
    // std::cout << *p << '\n';
    // *p = 42;
    // std::cout << *p << '\n';
    
    return 0;
}
