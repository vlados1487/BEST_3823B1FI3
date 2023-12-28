#include <math.h>

double sum_series(int n) {
    double eps = 1e-5;
    double p = 0, k = 1;
    p += k / n;
    if(n == 0){
        return p;
    }if (n == pow(2, 30)){
        return eps = 1e-5 - 1;
    }
    return sum_series(n - 1);
}