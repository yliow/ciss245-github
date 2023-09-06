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
    
    return 0;
}
