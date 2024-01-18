#include <iostream>

void max_subarray_sum(int x[], int n, int & max, int & max_i, int & max_j)
{
    for (int i = 0; i < n; ++i) // starting index of subarray
    {
        for (int j = i + 1; j <= n; ++j) // ending index of subarray
        {
            int s = 0;
            for (int k = i; k < j; ++k)
            {
                s += x[k];
            }
            if (s > max)
            {
                max = s;
                max_i = i;
                max_j = j;
            }
            // std::cout << i << ' ' << j << ' ' << s << ' '
            //           << max << ' ' << max_i << ' ' << max_j << '\n';
        }
    }
}

int main()
{
    int n = 5;
    int x[1000] = {5, 3, -7, 2, -1};
    int max = 0;
    int max_i;
    int max_j;
    max_subarray_sum(x, n, max, max_i, max_j);
    std::cout << "FINAL: " << max << ' ' << max_i << ' ' << max_j << '\n';
            
    return 0;
}
