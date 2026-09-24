#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction f0 = {1, 2};
    std::cout << f0    // operator<<(std::cout, f)
                       // << '\n'  
              << '\n';
    Fraction f1 = {1, 3};
    std::cout << f1 // becomes operator<<(std::cout,
                    //                    f1)
              << '\n';
    Fraction sum = f0 + f1;
    std::cout << sum << '\n';


    /*
      If S is a struct with member variable x

      struct S
      {
          [type] x;
      };

      S s;
      s.x     . = dot operator

      S t = {value1, value2, ...};

      t = s;                    c.f. array. you cannot assign for arrays

      t == s does NOT work
     */

    //Fraction a = {1, 2};
    Fraction a = get_Fraction(1, 2); // implement function get_Fraction
    Fraction b = get_Fraction(1, 3);
    b += a; // left += right         // implement function operator+=(b, a)
    // think about re-implementing operator+ by using operator+=
    Fraction c = get_Fraction(1, 2);
    std::cout << (a == c) << '\n';   // implement function operator==(a, c)
    std::cout << (a != c) << '\n';   // implement function operator!=(a, c)
                                     // this should use opeartor==(a, c)
    std::cout << (a < c) << '\n';    // implement function operator<(a, c)

    std::cout << a.get_n() << '\n';
    std::cout << a.get_d() << '\n';

    a.set_n(5);
    a.set_d(7); // set a to 5/7
    
    Fraction * p = new Fraction;
    std::cout << (*p).n << '\n';
    std::cout << p->n << '\n'; // -> is also called "re-referencing op"
    (*p) = get_Fraction(2, 3);
    std::cout << (*p) << '\n';
    
    delete p;
    p = NULL;
    
    return 0;
}
