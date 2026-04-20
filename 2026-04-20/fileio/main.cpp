#include <iostream>
#include <fstream>

int main()
{
    std::ifstream f("hw.txt", std::ios::in);

    char z[100];
    f >> z;
    std::cout << z << '\n';
    f >> z;
    std::cout << z << '\n';
    int i;
    double j;
    f >> i >> j;
    std::cout << i << ' ' << j << '\n';
    f >> i;
    std::cout << i << '\n';

    f.close();
        
    return 0;
}
