#include <math.h>

char find_bin_pattern(int number)
{ 
  int cnt = 0, bn[32];
  int i = 0, j = 0;
    while (number > 0) {
        bn[i] = number % 2;
        number = number / 2;
        i++;
        }
        for(int k = 0; k < i - 2; k++){
          if(bn[k] * 100 + bn[k + 1] * 10 + bn[k + 2] == 101) cnt += 1;
        }return cnt;
        
        
}