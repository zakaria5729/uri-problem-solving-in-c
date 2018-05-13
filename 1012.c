#include<stdio.h>

int main()
{
    double rectangled_triangle, circle, trapezium, square, rectangle, A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    square = B*B;
    trapezium = ((A+B)/2)*C;
    rectangle = A*B;
    circle = 3.14159*C*C;
    rectangled_triangle = .5*A*C;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", rectangled_triangle, circle, trapezium, square, rectangle);

    return 0;
}



