#include <iostream>

int main()
{
    int n = 5;
    int x[1000] = {5, 3, -7, 2, -1};
    for (int i = 0; i < n; ++i) // starting index of subarray
    {
        for (int j = i + 1; j <= n; ++j) // ending index of subarray
        {
            int s = 0;
            for (int k = i; k < j; ++k)
            {
                s += x[k];
            }
            std::cout << i << ' ' << j << ' ' << s << '\n';
        }
    }
            
    return 0;
}
