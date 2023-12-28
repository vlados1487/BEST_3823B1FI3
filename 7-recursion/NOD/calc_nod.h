#include <math.h>

int nod(int first, int second){
    if(first < 1 || second < 1) return -1;
    if(first > second) return nod(first - second, second);
    if(first < second) return nod(first, second - first);
    if(first == second) return first;
    
}