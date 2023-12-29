#include <math.h>

double calc_sum_elements(int* array, int array_size){
    double p = (double)array[array_size - 1];
    if (array_size < 0)return -1;
    if(array_size == 1) return p;

    
    return p + calc_sum_elements(array, array_size - 1);

}
