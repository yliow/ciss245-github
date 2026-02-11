#include <iostream>

bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else
    {
        for (int d = 2; d <= sqrt(n); ++d)
        {
            if (n % d == 0) return false;
        }
    }
    return true;
}

void nextprime(int * p)
{
    while (!isprime(*p))
    {
        ++(*p);
    }
}

void nextprime(int & x)
{
    while (!isprime(x))
    {
        ++x;
    }
}

// x = nextprime(x)
// int nextprime(int x)
// {
// }

int main()
{
    int x = 7;
    nextprime(&x); // use first function
    std::cout << x << '\n';
    nextprime(x); // the second function
    //nextprime(x);
    return 0;
}
