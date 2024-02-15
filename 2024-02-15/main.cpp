#include <iostream>

struct vec2i
{
    int x, y;
};

struct Alien
{
    vec2i p;
    vec2i v;
    int energy;
    int points;
};

void init(Alien & alien, int px, int py, int vx, int vy, int energy, int points)
{
    alien.p.x = px;
    alien.p.x = px;
    alien.v.x = vx;
    alien.v.y = vy;
    alien.energy = energy;
    alien.points = points;
}
void run(Alien & alien)
{
    alien.p.x += alien.v.x;
    alien.p.y += alien.v.y;
}

int main()
{
    Alien alien0;
    init(alien0, 10, 5, 1, 2, 50, 100);
    run(alien);
}
