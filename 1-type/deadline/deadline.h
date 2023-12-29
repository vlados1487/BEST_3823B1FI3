int get_score(short score, int start, int stop, int now) {
    float r;
    float m;
    r = stop - start;
    m = (score / 2) / r;
        if (now >= stop){
            return (score + 1) / 2;
        }if (now  <= start){
            return score;
        }if (now > start && now < stop){
            float ustal;
            ustal = m * (now - start) + 0,1;
            start = ustal;
            
            return score - start; 
            
            
            }
    
}
