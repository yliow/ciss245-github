#ifndef C_H
#define C_H

#include <iostream>

class C
{
  public:
    C(int);
    int x() const;
    int y() const;
    
    static int y_;
    static int get_y();
  private:
    int x_;
    // int y_;
};

std::ostream & operator<<(std::ostream &, const C &);


#endif