#ifndef C_H
#define C_H

class C
{
  public:
    C(int);
    ~C();
    static int num_objects;
  private:
    int x_;
};
#endif
