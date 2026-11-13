#include <iostream>
//#include "C.h"
#include "D.h"

int main()
{
    // C c;
    // std::cout << c << '\n';
    int counter = 0;
    
    D d(3);
    std::cout << d << '\n';

    D e[5];
    for (int i = 0; i < 5; ++i)
    {
        e[i].x() = i;
    }
    for (int i = 0; i < 5; ++i)
    {
        std::cout << e[i] << '\n';
    }

    D * f[5];
    for (int i = 0; i < 5; ++i)
    {
        f[i] = new D(5 - i);
    }
    for (int i = 0; i < 5; ++i)
    {
        std::cout << (*f[i]) << '\n';
    }

    int n;
    std::cin >> n;
    D ** g = new D*[n];
    for (int i = 0; i < n; ++i)
    {
        g[i] = new D(i);
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << (*g[i]) << '\n';
    }

    
    //int * x = new int[n]; // basicall this is same as int x[n];


    for (int i = 0; i < n; ++i)
    {
        delete g[i];
    }
    delete[] g;

    
    for (int i = 0; i < 5; ++i)
    {
        delete f[i];;
    }    
    return 0;
}
