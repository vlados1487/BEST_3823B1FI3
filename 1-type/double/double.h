bool compare_double(double x, double y) {
    if((int)(x * 1000000) == (int)(y * 1000000)){
    return true;
    }else{
        return false;
    }
    }

int get_nearest_int(double x) {
    double  i;
    int k;
    if ((int)(x * 10) % 10 > 4) k = (int)x + 1;
    if ((int)(x * 10) % 10 <= 4) k = (int)x;
    // i = x * 10;
    // k = i;
    // if (k % 10 < 5){
    //     return x + 1 - k % 10;
    // }if (k % 10 >= 5){
    // return x - k % 10; // Not implementation
    // }
    return k;
}

double get_fractional(double x) {
    double k, n, p;
    p = (int)(x * 10000);
    n = (int)x;
    k = p - n * 10000;
    while((int)k > 0){
        k /= 10;
        }

    
    return k; // Not implementation
}
