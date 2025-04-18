#include <iostream>
#include <string>

class LivingThing
{
public:
    LivingThing(std::string name, int x)
        :name_(name), x_(x)
    {}
    virtual ~LivingThing()
    {}
    std::string get_name() const
    {
        return name_;
    }
    int get_x() const
    {
        return x_;
    }
    // virtual void talk()
    // {
    //     std::cout << get_name() << ": ???\n"; // <--- no point
    // }
    virtual void talk() = 0; // <--- abstract class
private:
    std::string name_;
    int x_;
};

class Man: public LivingThing
{
public:
    Man(std::string name, int x)
        : LivingThing(name, x)
    {}
    void talk()
    {
        std::cout << get_name() << ": Hi, my name is " << get_name() << ".\n";
    }
private:
};
std::ostream & operator<<(std::ostream & cout, const Man & man)
{
    cout << "<Man " << man.get_name() << ", " << man.get_x() << '>';
    return cout;
};

class Dog: public LivingThing
{
public:
    Dog(std::string name, int x, Man * powner=NULL)
        : LivingThing(name, x), powner_(powner)
    {}
    Man * get_powner() const
    {
        return powner_;
    }
    void talk()
    {
        std::cout << get_name() << ": bow wow\n";
    }
private:
    Man * powner_;
};

std::ostream & operator<<(std::ostream & cout, const Dog & dog)
{
    if (dog.get_powner() == NULL)
    {
        cout << "<Dog " << dog.get_name() << ", " << dog.get_x()
             << ", " << "[NO OWNER]"
             << '>';
    }
    else
    {
        cout << "<Dog " << dog.get_name() << ", " << dog.get_x()
             << ", " << (*dog.get_powner())
             << '>';
    }
    return cout;
};


class P
{
public:
    virtual void f()
    {
        std::cout << "P::f()\n";
    }
};


class C: public P
{
    virtual void f()
    {
        std::cout << "C::f()\n";
    }
};

int main()
{
    Man john("John", 5);
    Dog rex("Rex", 8, &john);
    Dog goldie("Goldie", 10);

    std::cout << john << '\n';
    std::cout << rex << '\n';
    std::cout << goldie << '\n';

    john.talk();
    rex.talk();

    // example: virtual method
    // P * p = new C();
    // p->f();
    // delete p;

    LivingThing * thing[3];
    thing[0] = new Man("John", 8);
    thing[1] = new Man("Tom", 10);
    thing[2] = new Dog("Rex", 9);
    // or use std::vector< LivingThing * > like this:
    //
    // std::vector< LivingThing * > thing; <--- probably best
    // thing.push_back(new Man("John", 8));
    // thing.push_back(new Man("Tom", 10));
    // thing.push_back(new Rex("Rex", 9));
    
    while (1)
    {
        for (int i = 0; i < 3; ++i)
        {
            thing[i]->talk();
        }

        // alternative with std::vector< LivingThing * >:
        // for (int i = 0; i < thing.size(); ++i)
        // {
        //     thing[i]->talk();
        // }
        
        break;
    }

    for (int i = 0; i < 3; ++i) delete thing[i];

    // WRONG:
    //LivingThing a("a", 5);
    
    return 0;
}
