#include <math.h>
#include <stdlib.h>
int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if(aN != bN) return NULL;
    int l = aM * bM, cnt = 0, bm = bM, j2 = 0, strok = 0;
    int* p = malloc(l * sizeof(int));
    for(int i = 0; i < l; i++){
        p[i] = 0;
        for(int j = 0 ; j < bM; j++){
            while(cnt < aN){
                p[j] += A[strok] * B[j2];
                cnt += 1;
                strok += 1;
                j2 += bM;
                }
            
            }
    }


    
    
    
    
    return 0;
}
