#include <math.h>

double schitayu(int k){
    if (k == 0) return 0;
    return (schitayu(k-1) + 1) / (double)k;
}

double find_sum_elements_series(int k){
    double l = 0;
    if(k < 0) return -1;
    for(int i = 0; i < k; i++){
        l += schitayu(i);
    }
    return l;
}
