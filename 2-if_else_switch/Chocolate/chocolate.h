int chocolate(int n, int m, int k){
    int s;
    s = m * n;
    if (k > s || k < 0 || m < 0 || n < 0) return 0;
    if(k % m == 0 || k % n == 0) return 1;
    
    
    return 0;
}