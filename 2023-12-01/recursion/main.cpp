#include <iostream>


// Conversion/typecast operator
class Rational
{
public:
    Rational(int n, int d);
    operator int() const;
private:
    int n_,d_;
};

Rational::Rational(int n, int d)
    : n_(n), d_(d)
{}

Rational::operator int() const
{
    return n_ / d_;
}


// More recursion examples
int sum0(int x[], int n)
{
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += x[i];
    }
    return s;
}

int sum1(int x[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum1(x, n - 1) + x[n - 1];
    }
}

int linsearch0(int x[], int n, int target)
{
    for (int i = 0; i < n; ++i)
    {
        if (x[i] == target) return i;
    }
    return -1;
}

int linsearch1(int x[], int n, int i, int target)
{
    if (i == n)
    {
        return -1;
    }
    else
    {
        if (x[i] == target) return i;
        else return linsearch1(x, n, i + 1, target);
    }
}

int linsearch2(int x[], int n, int target)
{
    return linsearch1(x, n, 0, target);
}

int sum2(int x[], int i, int n)
{
    if (i == n)
    {
        return 0;
    }
    else
    {
        return x[i] + sum2(x, i + 1, n);
    }
}

int main()
{
    Rational r(3, 2);
    int i = int(r);
    std::cout << i << '\n';

    int x[10] = {7, 3, 1, 2, 3, 4, 6, 8};
    std::cout << sum0(x, 5) << '\n';
    std::cout << sum1(x, 5) << '\n';
    std::cout << sum2(x, 0, 5) << '\n';

    std::cout << linsearch0(x, 5, 3) << '\n';
    std::cout << linsearch1(x, 5, 0, 3) << '\n';
    std::cout << linsearch2(x, 5, 3) << '\n';

    return 0;
}
