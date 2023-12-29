#include <math.h>
#include <stdlib.h>
int* array_generator(int* real_size, int k, int m, int f){
    *real_size = 12;
    int* a = (int*)malloc(*real_size * sizeof(int));
    a[0] = 0;
    a[*real_size - 1] = f;
    
    if (f  >= m && f  <= k){
        for(int i = 1; i < *real_size - 1; i++){
            a[i] = 1;
        }
        

    }
    if(f < m){
        for(int j = 2; j < *real_size - 1; j++){
                a[j] = 1;
            }
        while(a[1] < m){
            a[1] += 1;
            }
        if(a[1] > f) {
            a[1] -= (f - 1);
            a[2] += (f - 1);
        }

    }
    if(f == 0){
        for(int j = 0; j < *real_size; j++){
            a[j] = 0;
        }
    }
    return a;
}
