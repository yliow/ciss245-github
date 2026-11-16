#include <iostream>

class CarEngine
{
public:
    void turn_on()
    {
        std::cout << "engine turning on ...\n";
    }
};

class Car
{
public:
    void turn_on()
    {
        aCarEngine.turn_on();
    }
    CarEngine aCarEngine;
};

int main()
{
    Car my_honda;
    // my_honda.aCarEngine.turn_on();
    my_honda.turn_on();

    return 0;
}
