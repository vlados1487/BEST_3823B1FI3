#include <math.h>
#include <string.h>

void lower(char* str){
     for(int i = 0; i < strlen(str); i++){
        if(str[i] < 91 && str[i] > 64){
            str[i] += 32;
        }
     }
}
