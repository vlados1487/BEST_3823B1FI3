#include <math.h>
// int max(int* array, int size, int* pMax);
// int min(int* array, int size, int* pMin);

void get_max_min(int* array, int size, int* pMax, int* pMin){
    *pMax = array[0];
    *pMin = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] > pMax[0]) *pMax = array[i];
    
        if(array[i] < pMin[0]) *pMin = array[i];
    }return; 
}
    




// int max(int* array, int size, int* pMax){
//     int max = array[0];
//     for(int i = 0; i < size; i++){
//         if(array[i] > max) max = array[i];
//     }
//     for(int i = 0; i < size; i++){
//         if (array[i] == max){
//             pMax = &array[i];
//             return *pMax;
//         }}
// }

// int min(int* array, int size, int* pMin){
//     int min = array[0];
//     for(int i = 0; i < size; i++){
//         if(array[i] < min) min = array[i];
//     }
//     for(int i = 0; i < size; i++){
//         if (array[i] == min){
//             pMin = &array[i];
//             return *pMin;
//         }
//     }
// }