#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
   if(size > 8) return 0;
   unsigned long long l = 0;
   for (int i = 0; i < size; i++) {
    l = l + ((unsigned long long)arr[i] << (8 * i));
  }return l;
}

unsigned char unpack_ull(unsigned long long input){
    int putin = 4;
    unsigned char putout = (input >> 8 * putin)&0xff;
    return putout;
    
     
}