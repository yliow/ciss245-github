#include <iostream>
#include <string>

class Man
{
public:
    Man(std::string name, int x)
        : name_(name), x_(x)
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
std::ostream & operator<<(std::ostream & cout, const Man & man)
{
    cout << "<Man " << man.get_name() << ", " << man.get_x() << '>';
    return cout;
};

class Dog
{
public:
    Dog(std::string name, int x)
        : name_(name), x_(x)
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

std::ostream & operator<<(std::ostream & cout, const Dog & dog)
{
    cout << "<Dog " << dog.get_name() << ", " << dog.get_x() << '>';
    return cout;
};

int main()
{
    Man john("John", 5);
    Dog rex("Rex", 8);

    std::cout << john << '\n';
    std::cout << rex << '\n';
    return 0;
    
}
