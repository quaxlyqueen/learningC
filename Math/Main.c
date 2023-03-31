#include <stdio.h> // Known as a header file.
#include <math.h>

/*
 *
 * To use math functions, must include <math.h> header file. 
 *
 */
int main() {
    double A = sqrt(9);             // Square root of 9 = 3.
    double B = pow(2,4);            // 2 to the power of 4 is 16.
    int C = round(3.14);          // Round to nearest whole number.
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100.40);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);

    return 0;
}
