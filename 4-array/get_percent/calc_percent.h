#include <math.h>

int calc_percent(int matrix[], int size){
    float max = 0, min = 100, res, proc = 100, chast = 100 / size;
    for(int i = 0; i <= size; i++){
        if(matrix[i] > max){
            max = matrix[i];
        }
        if(matrix[i] < min){
            min = matrix[i];
        }
    }res = (max - min) / 2;
    
    for(int j = 0; j <= size; j++){
        if(matrix[j] < res){
            proc -= chast;
        }
    }
    return proc;
}