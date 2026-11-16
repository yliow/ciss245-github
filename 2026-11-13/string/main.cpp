#include <iostream>
#include <string> // <cstring>

int main()
{
    std::string s("abcdefghjijkl");
    std::cout << s << '\n';
    std::cout << s[0] << '\n';
    std::cout << (s == std::string("abc")) << '\n';
    std::cout << s.size() << '\n';
    std::cout << s.substr(4, 8) << '\n';


    std::string t("123123123");
    s.swap(t);
    std::cout << s << '\n';
    std::cout << t << '\n';
    return 0;
}
