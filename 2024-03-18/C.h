#ifndef C_H
#define C_H

class C
{
  public:
    C(int);
    int x;
    static int get_y();
    static void set_y(int);
    static int get_z();
    static void set_z(int);
  private:
    static int y;
    static int z;
};

#endif
