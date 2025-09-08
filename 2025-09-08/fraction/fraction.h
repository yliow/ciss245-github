#ifndef FRACTION_H
#define FRACTION_H

int min(int x, int y);
int GCD(int m, int n);
void print_fraction(int n, int d);
void add_fraction(int n0, int d0,
                  int n1, int d1,
                  int & n2, int & d2);
void sub_fraction(int n0, int d0,
                  int n1, int d1,
                  int & n2, int & d2);

#endif
