int QuadraticEquation(double a, double b, double c){
    double d, x1, x2;
    double sqrt(), pow();
    
    d = pow(b, 2) - 4 * a * c;
    if (d >= 0){
        x1 = (-b + sqrt(d, 2)) / 2 * a;
        x2 = (-b - sqrt(d, 2)) / 2 * a;
        return x1 + x2;
        }
    return 0;
}