#include <iostream>
#include "mystring.h"

int main()
{
    // char x[10] = {'c', 'a', 't', '\0'}; // "cat";
    // std::cout << "x: [" << x << "] ";
    // for (int i = 0; i < 3; ++i)
    // {
    //     std::cout << int(x[i]) << ' ';
    // }
    // std::cout << '\n';

    // std::cout << mystrlen(x) << '\n';

    // char y[10] = "apple";
    // std::cout << mystrlen(y) << '\n';

    // mystrcpy(y, x);
    // std::cout << "x:" << x << '\n';
    // std::cout << "y:" << y << '\n';

    // char s[10] = "apple";
    // char t[10] = "cat";
    // mystrcat(s, t);
    // std::cout << "s: [" << s << "]\n";
    // std::cout << "t: [" << t << "]\n";

    char s[10] = "cat";
    char t[10] = "cat";
    std::cout << (mystrcmp(s, t) == 0 ? "pass" : "FAIL") << '\n';
    char t1[10] = "cate";
    std::cout << (mystrcmp(s, t1) == 1 ? "pass" : "FAIL") << '\n';
    char t2[10] = "cas";
    std::cout << (mystrcmp(s, t1) == 1 ? "pass" : "FAIL") << '\n';

    return 0;
}
