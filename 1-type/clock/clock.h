

int get_time(long long angle) {
    int h = 0, m = 0, s = angle, l;
    if(s >= 360){
    while (s >= 360){
        m += 1 * 100;
        s -= 360;
        if(m >= 6000){
            h += 1 * 10000;
            m -= 6000;
        }
    }
    }if (s < 360){
        s /= 6;
    }
    l = h + m + s;



    return l; // Not implementation
}