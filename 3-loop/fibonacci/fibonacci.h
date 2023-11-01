
long fib(int m){
    int i = 0;
    long long n = 0;
    long long a[47];
    a[0] = 0;
    a[1] = 1;
    if(m < 0)return -1;
    if(m >= 0){
    for(i = 0; i < 47; i++){
        a[i + 2] = a[i] + a[i + 1];
        if(a[i] > m)break;
        }for(int j = i - 1; j >= 0; j--){
            n += a[j];
        }return n;}

    }
