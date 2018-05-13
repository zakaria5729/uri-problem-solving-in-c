#include<stdio.h>

int main()
{
    double arr[3];
    double a, b, c, temp, d;
    int i, j;

    scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);

    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    a = arr[0];
    b = arr[1];
    c = arr[2];

    d = b*b + c*c;

    if(a>=(b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a == d)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(a*a > d)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a*a < d)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a==b && b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a==b || b==c ||  a==c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
