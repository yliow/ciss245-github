#include <iostream>

// int binarysearch(int x[], int start, int end,
//                  int target)
// {
//     int left = start;
//     int right = end - 1;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         std::cout << left << ' ' << mid << ' ' << right << '\n';
//         if (x[mid] == target)
//         {
//             return mid;
//         }
//         else if (x[mid] < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }

void init(int ca[], int n)
{
    for (int i = 0; i < 2 * n + 1; ++i)
    {
        ca[i] = 0;
    }
    ca[n] = 1;
}

void println(int ca[], int n)
{
    for (int i = 0; i < 2 * n + 1; ++i)
    {
        std::cout << (ca[i] == 1 ? 'X' : ' ');
    }
    std::cout << '\n';
}

int main()
{
    // int x[] = {1, 4, 5, 7, 9, 15, 19, 26};
    // int index = binarysearch(x, 0, 8, 5);

    int ca[2 * 500 + 1];
    int t[2 * 500 + 1];
    int n;
    std::cin >> n;

    init(ca, n);
    println(ca, n);

    for (int i = 0; i < n; ++i)
    {
        t[0] = ca[0];
        t[2 * n] = ca[2 * n];
        for (int j = 1; j < 2 * n; ++j)
        {
            if (ca[j - 1] == 0 && ca[j] == 0 && ca[j + 1] == 0)
            {
                t[j] = 0;
            }
            else if (ca[j - 1] == 0 && ca[j] == 0 && ca[j + 1] == 1)
            {
                t[j] = 1;
            }
            else if (ca[j - 1] == 0 && ca[j] == 1 && ca[j + 1] == 0)
            {
                t[j] = 0;
            }
            else if (ca[j - 1] == 0 && ca[j] == 1 && ca[j + 1] == 1)
            {
                t[j] = 1;
            }
            else if (ca[j - 1] == 1 && ca[j] == 0 && ca[j + 1] == 0)
            {
                t[j] = 1;
            }
            else if (ca[j - 1] == 1 && ca[j] == 0 && ca[j + 1] == 1)
            {
                t[j] = 0;
            }
            else if (ca[j - 1] == 1 && ca[j] == 1 && ca[j + 1] == 0)
            {
                t[j] = 1;
            }
            else if (ca[j - 1] == 1 && ca[j] == 1 && ca[j + 1] == 1)
            {
                t[j] = 0;
            }

            for (int j = 0; j < 2 * n + 1; ++j)
            {
                ca[j] = t[j];
            }
            println(ca, n);
        }
        
    }
    return 0;
}
