char left_more(double input[], unsigned int size){
    int cnt = 0;
    for(int i = size - 1; i > 0; i--){
        if(input[i] > input[i - 1]){
            cnt++;
        }
    }
    return cnt;
}