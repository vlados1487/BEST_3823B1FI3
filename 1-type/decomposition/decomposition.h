int reverse(int number) {
    int k;
    k = (number % 10) * 1000 + (number % 100 - number % 10) * 10 + (number % 1000 - number % 100) / 10 + (number % 10000 - number % 1000) / 1000;
    return k;
}

double decomposition(int number) {
    double k, t, d, s, e;
    t = (number / 1000) * 1000;
    s = (number / 100) % 10 * 100;
    d = (number / 10) % 10 * 10;
    e = number % 10;
    k = 4 / (pow(t, -1) + pow(s, -1) + pow(d, -1) + pow(e, -1));
    return k;
}

int append(int number, int start, int end) {
    double s;
    if(start > 0){
        s = start * 100000 + number * 10 + end;
        return s;
    }if(start < 0){
        s = start * 100000 - number * 10 - end;
        return s;
    }
    return 0; // Not implementation
}
