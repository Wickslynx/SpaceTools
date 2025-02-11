#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846


double deg_to_rad(double degrees) {
    return degrees * (PI / 180.0);
}


double calc_alt(double L, double a, double b, double c, double d) {
    double tana = tan(deg_to_rad(a));
    double tanb = tan(deg_to_rad(b));
    double tanc = tan(deg_to_rad(c));
    double tand = tan(deg_to_rad(d));
    double cosb = cos(deg_to_rad(b));
    double cosc = cos(deg_to_rad(c));
    return (L * tana * tand * cosb) / (tand + (cosc * tana));
}

int main() {
    double L, a, b, c, d;
    
    printf("Enter distance between observers (L): ");
    scanf("%lf", &L);
    
    printf("Enter angle a (degrees): ");
    scanf("%lf", &a);
    
    printf("Enter angle b (degrees): ");
    scanf("%lf", &b);
    
    printf("Enter angle c (degrees): ");
    scanf("%lf", &c);
    
    printf("Enter angle d (degrees): ");
    scanf("%lf", &d);
    
    double altitude = calc_alt(L, a, b, c, d);
    
    printf("Calculated altitude: %.2lf\n", altitude);
    return 0;
}
