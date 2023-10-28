
long fib(int m){
    int a[32] = {0, 1};
    int n;
    for(int i = 2; i < 32; i++){
        if(a[i - 2] + a[i - 1] < m){
            return a[i - 2] + a[i - 1]; break;
        }
    }
}