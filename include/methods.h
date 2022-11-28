#ifndef __METHODS_H__
#define __METHODS_H__

#include <math.h>
#include <stdio.h>

#define f(x) (cos(x) - pow(x, 3))
#define fp(x) (-sin(x) - 3 * pow(x, 2))

double A(double a, double b);
double B(double x);

#endif