#include <iostream>

void print_array(int x[], int start, int end);
int linearsearch(int x[], int start, int end, int target);

int main()
{
    int x[5] = {2, 3, 5, 7};
    print_array(x, 0, 5);
    print_array(x, 0, 3);
    print_array(x, 1, 4);
    print_array(x, 1, 8);
 
    std::cout << linearsearch(x, 0, 3, 2) << '\n';
    
    return 0;
}

int linearsearch(int x[], int start, int end, int target)
{
    for (int i = start; i < end; ++i)
    {
        if (x[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void print_array(int x[], int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}
