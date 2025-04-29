// calc_abhi.h

#ifndef CALC_ABHI_H
#define CALC_ABHI_H

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int (*getAdd())(int, int);
int (*getSubtract())(int, int);
int (*getMultiply())(int, int);
float (*getDivide())(int, int);

#endif

