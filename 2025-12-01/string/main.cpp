#include <iostream>
#include <string>

int main()
{
    std::string s("hello world");
    std::cout << s << '\n';
    std::cout << s[0] << '\n';
    s[0] = 'H';
    std::cout << s << '\n';
    std::cout << s.substr(3) << '\n';
    std::cout << s.substr(3, 7) << '\n';
    std::cout << (s == s) << '\n';
    std::cout << (s == s.substr(3, 7)) << '\n';
    return 0;
}
