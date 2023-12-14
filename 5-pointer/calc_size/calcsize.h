#include <math.h>

int calcsize(void* memory){
    int l = (int*)sizeof(memory);
    int cnt = 0;
    int* p;
    p = memory;
    for( ; ; p++){
        cnt += l;

        if(*p == 11 && *(p + 1) == 47){
            cnt += l;
            break;
        }
    }
    return cnt;
}
//z_4 - хз, как делать