#include <iostream>

void print(int x[], int n);
void println(int x[], int n);
void merge(int x[], int xlen,
           int y[], int ylen,
           int z[], int & zlen);

int main()
{
    int x[] = {3, 5, 10, 15, 20};
    int xlen = 5;
    int y[] = {1, 11, 15, 23};
    int ylen = 4;
    int z[1024];
    int zlen;

    merge(x, xlen, y, ylen, z, zlen);
    println(z, zlen);
    
    return 0;
}

void println(int x[], int n)
{
    print(x, n);
    std::cout << '\n';
}

void print(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
}


void merge(int x[], int xlen,
           int y[], int ylen,
           int z[], int & zlen)
{
    int i = 0; // index into x
    int j = 0; // index into y
    zlen = 0; // index into z 

    // CASE: both have values to be used
    while (i < xlen && j < ylen)
    {
        if (x[i] <= y[j])
        {
            z[zlen++] = x[i++]; 
        }
        else
        {
            z[zlen++] = y[j++];
        }
    }

    // CASE: One of the arrays is done
    while (i < xlen)
    {
        z[zlen++] = x[i++];
    }
    while (j < ylen)
    {
        z[zlen++] = y[j++];
    }
}

