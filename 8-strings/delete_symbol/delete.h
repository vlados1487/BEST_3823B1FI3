#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    int k = 0;
    for(int i = 0; i != '\0'; i++){
        if(str[i] == sym){
            while(str[i] == sym){
                k += 1;
            }
            str[i] = str[i + k];
        }
    }

}

