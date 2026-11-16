#include <iostream>

class LaserGun
{
public:
    void fire()
    {
        std::cout << "blast blast blast ...\n";
    }
};

class Alien
{
public:
    void fire()
    {
        laser_gun.fire();
    }
    LaserGun laser_gun;
};

int main()
{
    Alien alien;
    //alien.laser_gun.fire();
    alien.fire();
    
    return 0;
}
