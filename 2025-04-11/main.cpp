#include <iostream>
#include <string>

class LivingThing
{
public:
    LivingThing(std::string name, int x)
        :name_(name), x_(x)
    {}
    std::string get_name() const
    {
        return name_;
    }
    int get_x() const
    {
        return x_;
    }

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

    P * p = new C();
    p->f();

    delete p;
    
    return 0;
    
}
