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
private:
    int points_;
};

class Spaceship: public GameObject
{
    Spaceship(int x, int y)
        : GameObject(x, y)
    {}
private:
};

int main()
{
    Alien a(5, 6, 10);
    Spaceship(10, 10);

    return 0;
}
