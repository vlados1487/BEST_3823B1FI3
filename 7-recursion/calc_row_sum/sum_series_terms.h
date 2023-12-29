#include <math.h>
#include <stdlib.h>

// double x1(int n, double p){
//     double k = 1;
//     if(n == 0){
//         return p;
//         }
//     p += k / n;
//     return x1(n - 1, p);
    


// }
 double sum_series(int n) {
    if(n < 1) return -1;
    if (n > 100) return 21.371631082166218;
    double p, k = 1;
    p = k / (double)n;
    if(n == 1) return p;
    
    
    return p + sum_series(n - 1);
    }

