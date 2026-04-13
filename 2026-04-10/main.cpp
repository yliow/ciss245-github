#include <iostream>

int * binarysrch_(int * lower, int * upper, target)
{
    if (lower > upper)
    {
        return NULL;
    }
    else
    {
        int * mid = lower + (upper - lower) / 2;
        if (*mid == target) return mid;
        else if (*mid > target) return binarysrch_(lower, mid - 1);
        else binarysrch_(mid + 1, upper, target);
    }
}

int * binarysrch(int * start, int * end, int target)
{
    return binarysrch_(start, end - 1, target);
}


bool ispalindrome(char * lower, char * upper)
{
    if (lower == upper) // base case
    {
        return true;
    }
    else // recursive case
    {
        if (*lower == *upper)
        {
            return ispalindrome(lower + 1, upper - 1);
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int x[] = {1, 4, 5, 7, 8, 10, 11, 13, 15, 20};
    int * p = binarysrch(&x[0], &x[11], 15);
    std::cout << (*p) << '\n';

    char s[] = "madam";
    std::cout << ispalindrome(&s[0], &x[4]) << '\n';
    return 0;
}
