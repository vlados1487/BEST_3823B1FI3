int icecream(int x){
    if(x == 0) return 0;
    if(x % 3 == 0 || x % 5 == 0 || x % (5 + 3) == 0 ) return 1;
    return 0;
}