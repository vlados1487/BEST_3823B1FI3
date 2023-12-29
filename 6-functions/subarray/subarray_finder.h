#include <math.h>

int iscupdma(int* array, int array_size, int* subarray1, int subarray_size1){
    int zapmind;
    for(int i = 0; i < array_size; i++){
        if(array[i] == subarray1[i]){
            zapmind = i;
            for(int j = 1; j < subarray_size1; j++){
                if(i + j < array_size){
                if(array[i + j] != subarray1[j]){
                    zapmind = -1;
                    break;
                }
                }
            }
        }
    }return zapmind;
}


int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    iscupdma(array, array_size, subarray1, subarray_size1) + iscupdma(array, array_size, subarray2, subarray_size2) + iscupdma(array, array_size, subarray3, subarray_size3);
    
    return iscupdma(array, array_size, subarray1, subarray_size1) + iscupdma(array, array_size, subarray2, subarray_size2) + iscupdma(array, array_size, subarray3, subarray_size3);
}
