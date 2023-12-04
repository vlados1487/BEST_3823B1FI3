#include <math.h>
#include <stdio.h>
double integral(double a, double b, double c, double left, double right){
    double l, r;
    r = right - left;
    l = (a * pow(r, 3)) / 3 + (b * pow(r, 2)) / 2 + c * r;
    if(l >= 0) return l;
    if(l < 0) return -1;

}