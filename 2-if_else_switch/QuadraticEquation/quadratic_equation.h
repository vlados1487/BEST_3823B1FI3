int QuadraticEquation(double a, double b, double c){
    double d, x1, x2, y1, y2, i;
    double sqrt(), pow();
    
    i = sqrt(-1);
    d = b * b - 4 * a * c;
    x1 = (-b + sqrt(d)) / 2 * a;
    x2 = (-b - sqrt(d)) / 2 * a;
    if (d >= 0){
        
        return x1 + x2;
    }if (d == 0){
        return x1;
    }if(d < 0){
        y1 = -b / 2 * a;
        y2 = (sqrt(-d)) / 2 * a;
        return y1 + y1;
    }
    return 0;
}