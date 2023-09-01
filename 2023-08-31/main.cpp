#include <iostream>
#include <cmath>

int numdigits(int n);
int sumdigits(int n);  // which of the 3 sum-of-digits is most efficient?
int sumdigits1(int n);
int sumdigits2(int n);

int main()
{
    int n;
    std::cin >> n;
    std::cout << numdigits(n) << '\n';
    std::cout << sumdigits(n) << '\n';
    std::cout << sumdigits1(n) << '\n';
    std::cout << sumdigits2(n) << '\n';
    return 0;
}


int numdigits(int n)
{
    // WHAT ABOUT NEGATIVE n?
    // n = -521 -> 3 digits
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int count = 0;
        while (n != 0)
        {
            int digit = n % 10;
            n /= 10;
            ++count;
            //std::cout << n << ' ' << count << '\n';
        }
        return count;
    }
}

int sumdigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        n /= 10;
        sum += digit;
    }
    return sum;
}

int sumdigits1(int n)
{
    int sum = 0;
    int numdigits_ = numdigits(n);
    for (int i = 0 ; i < numdigits_; ++i)
    {
        int digit = n / int(pow(10, i)) % 10;
        sum += digit;
    }
    return sum;
}

int sumdigits2(int n)
{
    int sum = 0;
    int tenpower = 1;
    int numdigits_ = numdigits(n);
    for (int i = 0 ; i < numdigits_; ++i)
    {
        int digit = n / tenpower % 10;
        sum += digit;
        tenpower *= 10;
    }
    return sum;
}

