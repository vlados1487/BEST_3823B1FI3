int get_score(short score, int start, int stop, int now) {
    int r;
    int m;
    r = stop - start;
    m = (score / 2) / r;
        if (now > stop){
            return (score + 1) / 2;
        }if (now  <= start){
            return score;
        }if (now >= start && now <= stop){
            
            return score - m * (now - r); 
            
            
            }
            return 0;
    
}
