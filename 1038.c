#include<stdio.h>

int main()
{
    double A, B, D, x1, x2;

    scanf("%lf %lf", &A, &B);

    if(A==1)
    {
        printf("Total: R$ %.2lf\n", B*4.00);
    }
    else if(A==2)
    {
        printf("Total: R$ %.2lf\n", B*4.50);
    }
    else if(A==3)
    {
         printf("Total: R$ %.2lf\n", B*5.00);
    }
    else if(A==4)
    {
         printf("Total: R$ %.2lf\n", B*2.00);
    }
    else if(A==5)
    {
         printf("Total: R$ %.2lf\n", B*1.50);
    }

    return 0;
}
