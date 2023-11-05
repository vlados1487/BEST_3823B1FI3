#include <math.h>

char count_max_digit(long long number)
{
    int len = 0, i = 0, max = 0, cnt = 0;
    long long num;
    num = llabs(number);
    while (num > 0){
        len++;
        num /= 10;
    }num = llabs(number);
    int a[32];
    for(i = 0; i < len; i++){
        a[i] = num % 10;
        if(a[i] > max){
            max = a[i];
        }
        num /= 10;
        
    }for(i = 0; i < len; i++){
        if(a[i] == max){
            cnt += 1;
            }

            }return cnt;
}
