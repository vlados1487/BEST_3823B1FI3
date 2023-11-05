#include <math.h>

char find_digit(double number, char digit){
    long double p;
    double L, y;
    int a[20], i = 0, o, j, cnt = 0, u;
    y = modf(number, &L);
    u = (int)number;
    p = number - u;
    o = p * 1000000000;
    if(digit > 9 || digit < 0) return -1;
    if(y > 0){
    for(i = 0; o > 0; i++)
    {
        a[i] = o % 10;
        o /= 10;
        }
    for(j = i + 1; u > 0; j++){
        a[j] = u % 10;
        u /= 10;
    }
    i = j;
    for(j = j - 1; j >= 0; j--){
        if(a[j] != digit){
            cnt++;
        }
        if(a[j] == digit) break;


    }cnt += 1;
    return cnt;
    }
    if(y == 0){
        long long u = number;
        cnt = 1;
    for(j = 0; u > 0; j++){
        a[j] = u % 10;
        u /= 10;
    }
    for(j = j - 1; j >= 0; j--){
        if(a[j] != digit){
            cnt++;
        }
        if(a[j] == digit) break;


    }
    return cnt;
    }
    

}