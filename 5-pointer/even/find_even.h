#include <math.h>

int* find_even(int* arr, int size){
     int i;
    for(i = 0; i < size; i++){
        if(*arr % 2 == 0){
            return arr;
            break;
        }if(*arr % 2 != 0){
            arr += 1;
        }
    }if(i == size){
        return NULL;
    }
    }

