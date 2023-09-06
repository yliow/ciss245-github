#include <iostream>

int binarysearch(int x[], int start, int end,
                 int target)
{
    int left = start;
    int right = end - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        std::cout << left << ' ' << mid << ' ' << right << '\n';
        if (x[mid] == target)
        {
            return mid;
        }
        else if (x[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int x[] = {1, 4, 5, 7, 9, 15, 19, 26};
    int index = binarysearch(x, 0, 8, 5);
    return 0;
}
