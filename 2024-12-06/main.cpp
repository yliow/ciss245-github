#include <iostream>

class LivingThing
{
public:
    virtual void talk()
    {
        std::cout << "LivingThing::talk() ... i'm a human being\n";
    }
    int id_;
private:
};

class Human: public LivingThing
{
public:
    virtual void talk()
    {
        std::cout << "Human::talk() ... i'm a human\n";
    }
    int addr_;
private:
};

class Dog
{
public:
private:
};

int main()
{
    Human john;
    Human tom;
    tom = john;

    LivingThing b;
    b = john; // ??????
    //john = b; // ??????

    LivingThing * p = &john;
    // or LivingThing * p = new Human;

    john.talk();
    p->talk();
    
    return 0;
}
