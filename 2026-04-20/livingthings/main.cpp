#include <iostream>
#include <string> // std::string ... C-style strings <cstring>

class LivingThing
{
public:
    LivingThing(const std::string & fname, int num_legs, int x)
        : fname_(fname), num_legs_(num_legs), x_(x)
    {}
    std::string get_fname() const
    {
        return fname_;
    }
    int get_num_legs() const
    {
        return num_legs_;
    }
    int get_x() const
    {
        return x_;
    }
private:
    std::string fname_;
    int num_legs_;
    int x_;
};

class Man: public LivingThing
{
public:
    Man(const std::string & fname, const std::string & lname, int num_legs,
        int x)
        : LivingThing(fname, num_legs, x), lname_(lname)
    {}
    std::string get_lname() const
    {
        return lname_;
    }
private:
    std::string lname_;
};
std::ostream & operator<<(std::ostream & cout, const Man & man)
{
    cout << "<Man fname:" << man.get_fname()
         << " lname:" << man.get_lname()
         << " num_legs:" << man.get_num_legs()
         << " x:" << man.get_x() << '>';
    return cout;
}

class Dog: public LivingThing
{
public:
    Dog(const std::string & fname, int num_legs, int x)
        : LivingThing(fname, num_legs, x)
    {}
private:
};
std::ostream & operator<<(std::ostream & cout, const Dog & dog)
{
    cout << "<Dog fname:" << dog.get_fname()
         << " num_legs:" << dog.get_num_legs()
         << " x:" << dog.get_x() << '>';
    return cout;
}

int main()
{
    Man jdoe("John", "Doe", 2, 5);
    Dog rex("Rex", 4, 7);

    std::cout << jdoe << '\n';
    std::cout << rex << '\n';
    return 0;
}
