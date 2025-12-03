#include <iostream>

class GameObject
{
public:
    GameObject(int x, int y)
        : x_(x), y_(y)
    {}
    int get_x() { return x_; }
    int get_y() { return y_; }
    
private:
    int x_, y_;
};

class Alien: public GameObject
{
public:
    Alien(int x, int y, int points)
        : GameObject(x, y), points_(points)
    {}
    int get_points() const
    {
        return points_;
    }
private:
    int points_;
};

class Spaceship: public GameObject
{
public:
    Spaceship(int x, int y)
        : GameObject(x, y)
    {}
private:
};

int main()
{
    Alien a(5, 6, 10);
    Spaceship s(10, 10);
    std::cout << a.get_points() << ' ' << a.get_x() << ' ' << a.get_y()
              << '\n';

    return 0;
}
