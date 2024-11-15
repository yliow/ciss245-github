#ifndef C_H
#define C_H

#include <iostream>

class C
{
  public:
    C(int);
    ~C();
    int x() const;
    int y() const;
    
    
    static int get_y();
    static int get_num_objects();
  private:
    int x_;
    static int y_;
    static int num_objects_;
    // int y_;
};

std::ostream & operator<<(std::ostream &, const C &);


#endif
