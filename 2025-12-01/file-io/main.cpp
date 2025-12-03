#include <iostream>
#include <fstream> // std::ofstream and std::ifstream

int main()
{
    // std::ofstream f("hw.txt", std::ios::out);

    // f << "hello world\n";

    // int x = 0;
    // double y = 3.14;
    // char z[] = "c++rules";
    // f << x << ' ' << y << '\n';
    // f << z << '\n';

    // f.close();

    // std::ifstream f("hw.txt", std::ios::in);
    // char z[1024];
    // f >> z;
    // std::cout << z << '\n';
    // f >> z;
    // std::cout << z << '\n';
    // int x;
    // double y;
    // f >> x >> y >> z;
    // std::cout << x << ' ' << y << ' ' << z << '\n';

    int score = 5980;
    char name[1024] = "john";
    // std::ofstream f("highscores.txt", std::ios::out);
    // f << name << ' ' << score << '\n';
    // f.close();
    
    std::ifstream g("highscores.txt", std::ios::in);
    g >> name >> score;
    std::cout << name << ' ' << score << '\n';
    return 0;
}
