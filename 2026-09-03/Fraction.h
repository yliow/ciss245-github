// file: Fraction.h
#ifndef FRACTION_H
#define FRACTION_H

int GCD(int, int);
int min(int x, int y);

void Fraction_print(int n, int d);
void Fraction_add(int & sum_n, int & sum_d,
                  int xn, int xd,
                  int yn, int yd);
void Fraction_println(int n, int d);

#endif
