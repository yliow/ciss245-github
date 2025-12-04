#include <iostream>

class LivingThing
{
public:
    LivingThing(int id, int x)
        : id_(id), x_(x)
    {}
    int x() const
    {
        return x_;
    }
    int & x()
    {
        return x_;
    }
    int id() const
    {
        return id_;
    }
    int & id()
    {
        return id_;
    }
private:
    int id_;
    int x_;
};

class Human: public LivingThing
{
public:
    Human(int id, int x)
        : LivingThing(id, x)
    {}
private:
};

class Man: public Human
{
public:
    Man(int id, int x)
        : Human(id, x)
    {}
private:
};

std::ostream & operator<<(std::ostream & cout, const Man & man)
{
    cout << "<Man id:" << man.id() << ", x:" << man.x() << '>';
    return cout;
}

class Woman: public Human
{
public:
    Woman(int id, int x)
        : Human(id, x)
    {}
private:
};

class Dog: public LivingThing
{
public:
    Dog(int id, int x)
        : LivingThing(id, x)
    {}
private:
};

    
int main()
{
    Man john(0, 42);
    Dog rex(1, 43);

    std::cout << john << '\n';
    
    return 0;
}
