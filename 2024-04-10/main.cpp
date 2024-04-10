#include <iostream>
#include <string>

class Earthling
{
public:
    Earthling(const std::string & name, int age, int x, int y)
        : name_(name), age_(age), x_(x), y_(y)
    {}
//private:
    std::string name_;
    int age_;
    int x_, y_;
};

class Man: public Earthling
{
public:
    Man(const std::string & name, int age, int x, int y, int num_pants)
        : num_pants_(num_pants), x_(-9999), Earthling(name, age, x, y)
    {}
//private:
    int num_pants_;
    int x_;
};

int main()
{
    Man jdoe("John Doe", 20, 0, 0, 5);
    std::cout << jdoe.num_pants_ << ' ' <<  jdoe.name_ << ' '
              << jdoe.x_ << ' '  
              << jdoe.Earthling::x_ << '\n';
    
    return 0;
}
