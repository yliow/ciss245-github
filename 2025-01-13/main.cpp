#include <iostream>

void addfraction(int a0, int b0,
                 int a1, int b1,
                 int & a2, int & b2)
{
    a2 = 0;
    b2 = 0;
    return;
}

int main()
{
    int a0, b0;
    int a1, b1;
    int a2, b2; // result of sum of a0/b0 and a1/b1

    std::cin >> a0 >> b0 >> a1 >> b1;
    addfraction(a0, b0,
                a1, b1,
                a2, b2);
    
    std::cout << a0 << '/' << b0
              << " + "
              << a1 << '/' << b1
              << " = "
              << a2 << '/' << b2
              << '\n';

    return 0;
}
