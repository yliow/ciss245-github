#include <iostream>

int main()
{
    int * p = NULL;

    if (p == NULL)
    {
        std::cout << "sorry cannot *p ...\n";
    }
    else
    {
        std::cout << "*p = " << (*p) << '\n';
    }
}
