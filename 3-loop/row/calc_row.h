long long calc_row(int n, long long k){
    int a = 1;
    long long o = 0;
    while (a <= n){
        o += k * a;
        a++;
    }if(k < 0 && o > 0){
        return 0;
    }else return o;
}