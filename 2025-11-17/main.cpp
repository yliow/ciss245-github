#include <iostream>

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

int main()
{
    int x[] = {5, 9, 0, 4, 2, 1};
    bubblesort_one_pass(x, 0, 6);
    for (int i = 0; i < 6; ++i)
        std::cout << x[i] << ' ';
    std::cout << '\n';

    bubblesort(x, 0, 6);
    
    return 0;
}
