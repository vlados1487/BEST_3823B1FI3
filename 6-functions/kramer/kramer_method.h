#include <math.h>
double schitayu_det2(int* matrix, int* vector);
double schitayu_det3(int* matrix, int* vector);

double kramer_method(int* matrix, int* vector, int size){
    if(size == 2) schitayu_det2(matrix, vector);
    if (size == 3) schitayu_det3(matrix, vector);
}







double schitayu_det2(int* matrix, int* vector){
    
    double det2, detx, dety, x, y;
    det2 = matrix[0] * matrix[3] - matrix[1] * matrix[2];
    if(det2 == 0){
        return -1;
    }
    detx = vector[0] * matrix[3] - matrix[1] * vector[1];
    dety = matrix[0] * vector[1] - vector[0] * matrix[2];
    x = detx / det2;
    y = dety / det2;
    return x + y;
}

double schitayu_det3(int* matrix, int* vector){
    
    double det3, x, y, z;
    det3 = matrix[0] * matrix[4] * matrix[8] + matrix[6] * matrix[1] * matrix[5] + matrix[2] * matrix[3] * matrix[7] - (matrix[2] * matrix[4] * matrix[6]) - (matrix[1] * matrix[3] * matrix[8]) - (matrix[0] * matrix[7] * matrix[5]);
    if(det3 == 0){
        return -1;
    }
    x = vector[0] * matrix[4] * matrix[8] + vector[2] * matrix[1] * matrix[5] + matrix[2] * vector[1] * matrix[7] - (matrix[2] * matrix[4] * vector[2]) - (matrix[1] * vector[1] * matrix[8]) - (vector[0] * matrix[7] * matrix[5]);
    y = matrix[0] * vector[1] * matrix[8] + matrix[6] * vector[0] * matrix[5] + matrix[2] * matrix[3] * vector[2] - (matrix[2] * vector[1] * matrix[6]) - (vector[0] * matrix[3] * matrix[8]) - (matrix[0] * vector[2] * matrix[5]);
    z = matrix[0] * matrix[4] * vector[2] + matrix[6] * matrix[1] * vector[1] + vector[0] * matrix[3] * matrix[7] - (vector[0] * matrix[4] * matrix[6]) - (matrix[1] * matrix[3] * vector[2]) - (matrix[0] * matrix[7] * vector[1]);
    x /= det3;
    y /= det3;
    z /= det3;
    return x + y + z;
}