int maxmin(int input[], int size){
    int min = -100;
    for(int i = 0; i < size; i++){
        if(i == 0){
            if(input[i + 1] > input[i] && min < input[i]){
                min = input[i];
            }
        }
        if(input[i - 1] > input[i] && input[i + 1] > input[i] && (min < input[i])){
            min = input[i];
            }
        if(i == size - 1){
            if(input[i - 1] > input[i] && min < input[i]){
            min = input[i];
            }
        }    
        }
        return min;
}