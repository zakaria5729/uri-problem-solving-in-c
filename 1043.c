#include <stdio.h>
int main()
{
    float A, B, C, trapezium, triangle;
    scanf("%f %f %f", &A, &B, &C);

    if(A+B>C && A+C>B && B+C>A)
    {
        triangle = A+B+C;
        printf("Perimetro = %.1f\n", triangle);
    }
    else
    {
        trapezium = ((A+B)/2)*C;
        printf("Area = %.1f\n", trapezium);
    }

    return 0;
}
