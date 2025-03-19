#ifndef C_H
#define C_H

class C
{
  public:
    int x_;
    int y_;
    static int get_a();
    static void set_a(int);
  private:
    static int a_;
    static int b_;
};

#endif
