#include<stdio.h>

int main()
{
    long double x;
    char c[100];

    scanf("%LE", &x);

    sprintf(c, "%LE", x);  //sprintf function double number k string a convert kore

    if(c[0]!='-')
    {
        printf("+");
    }

    printf("%.4LE\n", x);

    return 0;
}
