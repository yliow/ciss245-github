#include <iostream>
#include <cstring> // C-string library (from C lang)
#include <string> // C++ string library (from C++ lang)

int main()
{
    std::string x;
    std::cout << '[' << x << ']' << '\n';
    std::string y("hello world");
    std::cout << '[' << y << ']' << '\n';
    std::string z("hello world");
    std::cout << (y == z) << '\n';
    std::cout << y[0] << '\n';
    y[0] = 'H';
    std::cout << y << '\n';
    std::cout << y.length() << '\n';
    std::cout << y.size() << '\n';
    std::string w("abcdefgh");
    y += w;
    std::cout << '[' << y << "]\n";
    x = y;
    std::cout << '[' << x << "]\n";
    std::cout << "x:" << x << '\n';
    std::string u = x.substr(5);
    std::cout << "u:" << u << '\n';
    u = x.substr(5, 3);
    std::cout << "u:" << u << '\n';
    x = "abc";
    std::cout << x << '\n';
    y = "defg";
    std::cout << y << '\n';
    x.swap(y);
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << y.front() << '\n';
    std::cout << y.back() << '\n';

    int i = 0;
    int j = 5 / i;
    
    
    return 0;
}
