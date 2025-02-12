#include <iostream>

// void bubblesort(int x[], int n)
// {
//     for (int i = n - 2; i >= 0; --i)
//     {
//         for (int j = 0; j <= i; ++j)
//         {
//             if (x[j] > x[j + 1])
//             {
//                 int t = x[j];
//                 x[j] = x[j + 1];
//                 x[j + 1] = t;
//             }
//         }
//     }
// }

void bubblesort(int * start, int * end)
{
    for (int * i = end - 2; i >= start; --i)
    {
        for (int * j = start; j <= i; ++j)
        {
            if (*j > *(j + 1))
            {
                int t = *j;
                *j = *(j + 1);
                *(j + 1) = t;
            }
        }
    }
}

// int binarysearch(int x[], int n, int target)
// {
//     int lower = 0;
//     int upper = n - 1;
//     while (lower <= upper)
//     {
//         // WRONG IF ARRAY HUGE:
//         // int mid = (lower + upper) / 2;
//         // CORRECT ADJUSTMENT (see notes)
//         int mid = lower + (upper - lower) / 2;
//         if (x[mid] == target)
//         {
//             return mid;
//         }
//         else if (target < x[mid])
//         {
//             upper = mid - 1;
//         }
//         else
//         {
//             lower = mid + 1;
//         }
//     }
//     return -1;
// }

int * binarysearch(int * start, int * end, int target)
{
    int * lower = start;
    int * upper = end - 1;
    while (lower <= upper)
    {
        //   x x x x x x x x x x x x x x x
        //
        //     ^       ^         ^
        //     lower   ?         upper
        //     <---------------->
        //        upper - lower
        int * mid = lower + (upper - lower) / 2;
        if (*mid == target)
        {
            return mid;
        }
        else if (target < *mid)
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    return NULL;
}

int main()
{
    int x[] = {3, 5, 4, 2, 8, 1, 7, 6};

    // array computation with indices
    // bubblesort(x, 8);
    // std::cout << binarysearch(x, 8, 7) << '\n';

    // array computation using pointers
    bubblesort(x, x + 8);
    int * p = binarysearch(x, x + 8, 7);
    std::cout << (*p) << '\n';

    return 0;
}
