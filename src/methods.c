#include "../include/methods.h"

// 二分法
double A(double a, double b) {
    while (fabs(a - b) > 1e-10)
        if (f(a) * f((a + b) / 2) > 0)
            a = (a + b) / 2;
        else
            b = (a + b) / 2;
    return (a + b) / 2;
}

// 牛顿法
double B(double x) {
    while (fabs(f(x)) > 1e-10) x = x - f(x) / fp(x);
    return x;
}