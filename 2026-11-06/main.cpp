#include <iostream>

int max(int x, int y)
{
    return (x >= y ? x : y);
}

int max(int x[], int n)
{
    if (n == 1)
    {
        std::cout << "n = 1 ... base case ... return " << x[0] << '\n';
        return x[0];
    }
    else
    {
        std::cout << "n = " << n << " ... rec case ...\n";
        int m = max(x, n - 1);
        std::cout << "n = " << n << " ... rec case ... m:" << m << '\n';
        int ret = max(m, x[n - 1]);
        std::cout << "returning " << ret << '\n';
        return ret;
    }
}

// recurse by shrink to the left
int max(int x[], int start, int end)
{
    int n = end - start;
    if (n == 1)
    {
        return x[start];
    }
    else
    {
        return max(max(x, start, end - 1), x[end - 1]);
    }
}

// recurse by shrink to the right
int max2(int x[], int start, int end)
{
    int n = end - start;
    if (n == 1)
    {
        return x[start];
    }
    else
    {
        return max(max2(x, start + 1, end), x[start]);
    }
}

int max(int * start, int * end)
{
    int n = end - start;
    if (n == 1)
    {
        return *start;
    }
    else
    {
        return max(max(start, end - 1), *(end - 1));
    }
}

// int linearsrc(int x[], int n, int target)
// {
//     ???
// }

int linearsrc(int x[], int start, int end, int target)
{
    int n = end - start;
    if (n == 0)
    {
        return -1;
    }
    else
    {
        if (x[start] == target) return start;
        else
        {
            return linearsrch(x, start + 1, end, target);
        }
    }
}

int * linearsrch(int * start, int * end, int target)
{
    int n = end - start;
    if (n == 0) return NULL;
    else
    {
        if (*start == target) return start;
        else
        {
            return linearsrch(start + 1, end, target);
        }
    }
}

int count(int * start, int * end, int target)
{
    int n = end - start;
    if (n == 0) return 0;
    else
    {
        if (*(end - 1) == target)
        {
            return count(start, end - 1, target) + 1;
        }
        else
        {
            return count(start, end - 1, target) + 0;
        }
    }
}

int main()
{
    int x[] = {5, 1, 3, 6, 2};
    int m = max(x, 5);
    std::cout << "final m:" << m << '\n';
    std::cout << "second max:" << max(x, 0, 5) << '\n';
    std::cout << "third max:" << max2(x, 0, 5) << '\n';
    std::cout << "fourth max:" << max(x, x + 5) << '\n';
    return 0;
}
