#include <math.h>

unsigned long long calc_e(char order){
    double e1, e2, n = 1;
    unsigned long long cnt = 0;
    e2 = pow(1 + 1/n, n);
    if(order == 1){
    e1 = 2.7;
    while(e2 <= e1){
        e2 = pow(1 + 1/n, n);
        cnt += 1;
        n++;
        }}
    if(order == 2){
        e1 = 2.71;
        while(e2 <= e1){
        e2 = pow(1 + 1/n, n);
        cnt += 1;
        n++;
        }}
    if(order == 3){
        e1 = 2.718;
        while(e2 <= e1){
        e2 = pow(1 + 1/n, n);
        cnt += 1;
        n++;
        }}
    if(order == 4){
        e1 = 2.7182;
        while(e2 < e1){
        e2 = pow(1 + 1/n, n);
        cnt += 1;
        n++;
        }}
    if(order == 5){
        e1 = 2.71828;
        while(e2 <= e1){
        e2 = pow(1 + 1/n, n);
        cnt += 1;
        n++;
        
        }}


    
    
    
    
    return cnt;
}