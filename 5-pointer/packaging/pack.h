#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
   if(sizeof(arr) > 8) return 0;
   unsigned long long l = 0;
   for (int i = 0; i < size; ++i) {
    l = l | ((unsigned long long)arr[i] << (size * i));
  }
}

unsigned char unpack_ull(unsigned long long input){
    return 5;
}