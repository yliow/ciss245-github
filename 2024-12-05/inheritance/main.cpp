#include <iostream>

class LivingThing
{
public:
    LivingThing(int id, int x, int numlegs)
        : id_(id), x_(x), numlegs_(numlegs)
    {}
    int get_id() const
    {
        return id_;
    }
//private:
    int id_;
    int x_;
    int numlegs_;
};

class Human: public LivingThing
{
public:
    Human(int id, int x, int numlegs)
        : LivingThing(id, x, numlegs), x_(-1)
    {}
//private:
    int x_;
};

class Dog: public LivingThing
{
public:
    Dog(int id, int x, int numlegs, int owner_id)
        : LivingThing(id, x, numlegs), owner_id_(owner_id)
    {}
private:
    int owner_id_;
};

int main()
{
    Human john(0, 10, 2);
    Dog rex(5, 12, 4, 0);
    std::cout << "john's id is " << john.get_id() << '\n';
    std::cout << "john's x_ is " << john.x_ << '\n';
    return 0;
}
