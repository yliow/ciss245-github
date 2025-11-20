#include <iostream>

// the subproblem shrinks the array to be printed on the left.
// try shrinking on the right
void println(int x[], int start, int end)
{
    if (end - start == 0)
    {
        std::cout << '\n';
    }
    else
    {
        std::cout << x[start] << ' ';
        println(x, start + 1, end);
    }
}

// max of array by divide-and-conquer
int max(int x[], int start, int end)
{
    if (end - start <= 1)
    {
        // base case
        if (end - start == 1)
        {
            return x[start];
        }
        else
        {
            return -1;
        }
    }
    else
    {
        // recursive case
        //int mid = (start + end) / 2;
        int mid = start + (end - start) / 2;
        int leftmax = max(x, start, mid);
        int rightmax = max(x, mid, end);
        return (leftmax >= rightmax ? leftmax : rightmax);
    }
}

// sum of array using DAC
int sum(int x[], int start, int end)
{
    if (end - start <= 1)
    {
        if (end - start == 1) return x[start];
        else return 0;
    }
    else
    {
        int mid = start + (end - start) / 2;
        int leftsum = sum(x, start, mid);
        int rightsum = sum(x, mid, end);
        return leftsum + rightsum;
    }
}


void bubblesort_one_pass(int x[], int start, int end)
{
    if (end - start <= 1)
    {
        return;
    }
    else
    {
        // recursive case
        // swap x[start], x[start + 1] if nec, then call recrusion
        // to finish the rest
        if (x[start] > x[start + 1])
        {
            int t = x[start];
            x[start] = x[start + 1];
            x[start + 1] = t;
        }
        bubblesort_one_pass(x, start + 1, end);
        println(x, start, end);
    }
}

void bubblesort(int x[], int start, int end)
{
    if (end - start <= 1)
    {
        // base cse
        return;
    }
    else
    {
        bubblesort_one_pass(x, start, end);
        bubblesort(x, start, end - 1);
    }
}

int binsrch(int x[], int lower, int upper, int target)
{
    if (lower > upper)
    {
        return -1;
    }
    else
    {
        int mid = lower + (upper - lower) / 2;
        if (x[mid] == target) return mid;
        else if (target < x[mid]) return binsrch(x, lower, mid - 1, target);
        else return binsrch(x, mid + 1, upper, target);
    }
}

int count(int x[], int start, int end, int target)
{
    if (end - start == 0)
    {
        return 0;
    }
    else if (end - start == 1)
    {
        return (x[start] == target ? 1 : 0);
    }
    else
    {
        int mid = start + (end - start) / 2;
        int leftcount = count(x, start, mid, target);
        int rightcount = count(x, mid, end, target);
        return leftcount + rightcount;
    }
}

int main()
{
    int x[] = {5, 9, 0, 4, 2, 1};

    // println(x, 1, 5);
    
    // int i = max(x, 0, 6);
    // std::cout << "max:" << i << '\n';

    // i = sum(x, 0, 6);
    // std::cout << "sum:" << i << '\n';

    //     int x[] = {5, 9, 0, 4, 2, 1};
    bubblesort_one_pass(x, 0, 6);
    std::cout << '\n';
    std::cout << "final: "; 
    println(x, 0, 6);

    std::cout << "bubblesort ...\n";
    bubblesort(x, 0, 6);
    println(x, 0, 6);

    std::cout << "binserch ...\n";
    int ret = binsrch(x, 0, 5, 5);
    std::cout << "ret:" << ret << '\n';

    int y[] = {3, 2, 0, 3, 3, 5, 3};
    int r = count(y, 0, 7, 3);
    std::cout << r << '\n';
    return 0;
}
