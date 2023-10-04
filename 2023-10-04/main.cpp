#include <iostream>
// create int_array library
void print(int x[], int x_len, int x_capacity)
{
    std::cout << '{';
    for (int i = 0; i < x_len; ++i)
    {
        std::cout << x[i];
        if (i < x_len - 1) std::cout << ", ";
    }
    std::cout << "}\n";
}

void insert(int x[], int & x_len, int x_capacity, int index, int value)
{
    
}

void insert(int x[], int * x_len, int x_capacity, int index, int value)
{
}

int main()
{
    int x[] = {5, 2, -1, 42, 99, 99, 99, 99};
    int x_len = 4;
    int x_capacity = 8;
    print(x, x_len, x_capacity);

    insert(x, x_len, x_capacity, 1, 99);
    print(x, x_len, x_capacity);    
    return 0;
}
