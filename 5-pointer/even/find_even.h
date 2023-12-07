#include <math.h>

int* find_even(int* arr, int size){
     for(int i = 0; i < size; i++){
        if(*arr % 2 == 0){
            return *arr;
        }
        arr += 1;
        if(i == size - 1){
            return NULL;
        }
    }
    }

