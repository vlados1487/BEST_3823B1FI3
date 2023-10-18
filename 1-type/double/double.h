bool compare_double(double x, double y) {
    if((int)x * 10 == (int)y * 10){
    return true;
    }else{
        return false;
    }
    }

int get_nearest_int(double x) {
    double  i;
    int k;
    i = x * 10;
    k = i;
    if (k % 10 < 5){
        return x + 1 - k % 10;
    }if (k % 10 >= 5){
    return x - k % 10; // Not implementation
    }
}

double get_fractional(double x) {
    return 0.1; // Not implementation
}
