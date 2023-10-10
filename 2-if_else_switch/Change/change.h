long long change(int a, int b, int c, int d){
    long long x1, x2;
    x1 = 100 * a + b;
    x2 = (long long)c * 100 + d;
    if(x1 > x2 || a < 0 || c < 0 || b < 0 || d < 0) return -1;
    
    
    
    return x2 - x1;
}