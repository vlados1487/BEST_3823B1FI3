#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double p = 0;
    double ch = 0, f = 0, znach = 0, znam = 0;
    for (int i = 0; i < size; i++){
        ch += vec1[i] * vec2[i];
        f += vec1[i] * vec1[i];
        znach += vec2[i] * vec2[i];
    }
    znam = sqrt(f * znach);
    p = acos(ch / znam);
    return (int)(p * 180 / 3.14159265);
}
