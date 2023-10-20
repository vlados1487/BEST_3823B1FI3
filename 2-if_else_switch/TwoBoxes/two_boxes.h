int twoboxes(double x1, double y1, double z1, double x2, double y2, double z2){
    double v1, v2;
    v1 = x1 * y1 * z1;
    v2 = x2 * y2 * z2;
    if (v1 <= 0 || v2 <= 0) return 0;
    if (x1 + z1 < x2 + z2 && y1 > y2 || x1 + y1 < x2 + y2 && z1 > z2 || x1 + z1 > x2 + z2 && y1 < y2 || x1 + y1 > x2 + y2 && z1 < z2 || y1 + z1 < y2 + z2 && x1 > x2 || z1 + y1 > y2 + z2 && z1 < z2) return 0;
    if (v1 < v2 || v2 < v1) return 1;
    
    
    return 0;
}