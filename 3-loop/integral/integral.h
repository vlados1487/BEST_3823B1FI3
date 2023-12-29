#include <math.h>
#include <stdio.h>
double integral(double a, double b, double c, double left, double right){
    double l, r;
    // r = right - left;
    // l = (a * pow(r, 3)) / 3 + (b * pow(r, 2)) / 2 + c * r;
    l = (a * pow(right, 3)) / 3 + (b * pow(right, 2)) / 2 + c * right;
    r = (a * pow(left, 3)) / 3 + (b * pow(left, 2)) / 2 + c * left;
    l = l - r;
    if(l > 0) return l;
    if(l <= 0) return -1;

}