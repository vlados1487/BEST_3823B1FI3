#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 1; //Счётчик итераций
    int cnt = 1, u, k = 0, l, r;
    l = left;
    r = right;
    while(k != number){
        
        k = (r + l) / 2;
        if (k > number){
            r = k - 1;
            

        }if (k < number){
            l = k + 1;
            
        }if(k == number){
            break;
        }
        i++;
        
    }if (left == 1) u = i * (number - 1);
    if (left == 0) u = i * number;
    return u;


    return i; //НЕ МЕНЯТЬ!

}