#include <iostream>

Car <----> D
class D; // forward declaration of a class
class Car
{
public:
    Car(int id, double mileage)
        : id_(id), mileage_(mileage)
    {}
    friend std::ostream & operator<<(std::ostream & cout, const Car & car);
    //friend int D::m() { ...... }
    //int D::n0() { ...... }
    //int D::n1() { ...... }
    //int D::n2() { ...... }
    friend D;
private:
    int id0_;
    int id1_;
    double mileage_;
};

std::ostream & operator<<(std::ostream & cout, const Car & car)
{
    cout << "<Car id:" << car.id_ << ", mileage:" << car.mileage_ << '>';
    return cout;
}

class D
{
public:
    int m() { ...... }
    int n0() { ...... }
    int n1() { ...... }
    int n2() { ...... }
    friend C;
};


// very very common
class mat2x2d;
class vec2d
{
    friend mat2x2d;
};

class mat2x2d
{
    friend vec2d;
};

class vec3d
{
};

class mat3x3d
{
};

int main()
{
    Car car(1, 40.5);
    std::cout << car << '\n'; 
    return 0;
}
