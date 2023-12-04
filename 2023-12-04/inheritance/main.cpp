#include <iostream>

class Man
{
public:
    Man(int id, int r, int c)
        : id_(id), r_(r), c_(c)
    {}
    int get_id() const
    {
        return id_;
    }
    int get_r() const
    {
        return r_;
    }
    int get_c() const
    {
        return c_;
    }
private:
    int id_;
    int r_, c_;
};
std::ostream & operator<<(std::ostream & cout, const Man & man)
{
    cout << "<Man id:" << man.get_id()
         << " r:" << man.get_r()
         << " c:" << man.get_c()
         << '>';
    return cout;
}


class Woman
{
public:
    Woman(int id, int r, int c)
        : id_(id), r_(r), c_(c)
    {}
    int get_id() const
    {
        return id_;
    }
    int get_r() const
    {
        return r_;
    }
    int get_c() const
    {
        return c_;
    }
private:
    int id_;
    int r_, c_;
};
std::ostream & operator<<(std::ostream & cout, const Woman & woman)
{
    cout << "<Woman id:" << woman.get_id()
         << " r:" << woman.get_r()
         << " c:" << woman.get_c()
         << '>';
    return cout;
}

class Dog
{
public:
    Dog(int id, int r, int c)
        : id_(id), r_(r), c_(c)
    {}
    int get_id() const
    {
        return id_;
    }
    int get_r() const
    {
        return r_;
    }
    int get_c() const
    {
        return c_;
    }
private:
    int id_;
    int r_, c_;
};
std::ostream & operator<<(std::ostream & cout, const Dog & dog)
{
    cout << "<Dog id:" << dog.get_id()
         << " r:" << dog.get_r()
         << " c:" << dog.get_c()
         << '>';
    return cout;
}

int main()
{
    Man john(3, 4, 7);
    std::cout << john << '\n';
    Woman jane(2, 2, 10);
    std::cout << jane << '\n';
    return 0;
}
