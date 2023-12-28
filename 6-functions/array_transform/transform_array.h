#include <math.h>
#include <stdlib.h>
void transform(double* array, int size, int* comands, int comands_count){
    for(int j = 0; j < comands_count; j++){
    switch(comands[j]){
        case 1:
        for(int i = 0; i < size; i++){
            array[i] += 1;
        }
        break;
        case 2:
        double tmp;
        for(int i = 0; i < size; i++){
            tmp = sqrt(fabs(array[i]));
            array[i] = tmp;
            }
            break;
        case 3:
        double sfarif = 0;
        for(int i = 0; i < size; i++){
            sfarif += array[i];
        }
        sfarif /= size;
        for(int i = 0; i < size; i++){
            array[i] = pow(fabs(array[i]), sfarif);

        }break;
        case 4:
        for(int i = 0; i < size; i++){
            if((int)array[i] % 2 == 0){
                array[i] *= -1;
            }
            if((int)array[i] % 2 != 0){
                array[i] = (int)pow(fabs(array[i]), -1);
                }
        }break;
        case 5:
        int* a = malloc(size * sizeof(double));
        for(int i = 0; i < size; i++){
            a[i] = (int)array[i];
        }
        for(int k = 0; k < size; k++){
            if(a[k] % 2 == 0 && k % 2 == 0){
                a[k] = 0;
            }
        }
        for(int k = 0; k < size; k++){
            array[k] = a[k];
        }break;
        case 6: 
        double cnt = 100 / size, cnt1 = 0;
        for(int i = 0; i < size; i++){
            if (array[i] == 0){
                cnt1 += cnt;
            }
        }
        for(int i = 0; i < size; i++){
            if(cnt1 >= 48 && cnt1 <= 52){
                break;
            }
            if(array[i] != 0 && cnt1 < 48){
                array[i] = 0;
                cnt1 += cnt;
            }
            if(array[i] == 0 && cnt1 > 52){
                array[i] += 1;
                cnt1 -= cnt;
            }
        }break;




    }
    }
}
