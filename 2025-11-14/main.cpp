#include <iostream>

int max(int x[], int start, int end)
{
    if (start == end - 1)
    {
        // base case
        std::cout << "max " << start << ' ' << end
                  << " ... base case ... return " << x[start] << '\n';
        return x[start];
    }
    else
    {
        // recursive case
        std::cout << "max " << start << ' ' << end
                  << " ... recursive case ... " << '\n';
        int m = max(x, start + 1, end);
        std::cout << "max " << start << ' ' << end
                  << " ... recursive case ... returning "
                  << (x[start] >= m ? x[start] : m) << '\n';
        return (x[start] >= m ? x[start] : m);
    }
}

int max2(int x[], int start, int end)
{
    if (start == end - 1)
    {
        // base case
        std::cout << "max2 " << start << ' ' << end
                  << " ... base case ... return " << x[start] << '\n';
        return x[start];
    }
    else
    {
        // recursive case
        std::cout << "max2 " << start << ' ' << end
                  << " ... recursive case ... " << '\n';
        int m = max2(x, start, end - 1);
        std::cout << "max2 " << start << ' ' << end
                  << " ... recursive case ... returning "
                  << (x[end - 1] >= m ? x[end - 1] : m) << '\n';
        return (x[end - 1] >= m ? x[end - 1] : m);
    }
}

int linsrch(int x[], int start, int end) // linsrch(int * start, int * end)
{
    if (start == end)
    {
        // base case: i.e. x[start .. end - 1] is en empty array
        return -1;
    }
    else
    {
        if (x[start] == target) return start;
        else return linsrch(x, start + 1, end, target);
    }
}

bool ispalindrome(char x[], int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    else
    {
        if (x[start] != x[end - 1]) return false;
        else ispalindrome(x, start + 1, end - 1);
    }
}

int sum(int x[], int start, int end)
{
    if (start == end)
    {
        return 0;
    }
    else
    {
        return sum(x, start + 1, end) + x[start];
    }
}

int count(int x[], int start, int end, int target)
{
    if (start == end)
    {
        return 0;
    }
    else
    {
        return count(x, start + 1, end, target) + (x[start] == target ? 1 : 0);
    }
    // try shrinking from the right
}

int main()
{
    int x[] = {5, 3, 1, 2, 4, 6, 9, 8, 7};
    int m = max(x, 1, 6);
    std::cout << m << '\n';
    m = max2(x, 1, 6);
    std::cout << m << '\n';
    return 0;
}
