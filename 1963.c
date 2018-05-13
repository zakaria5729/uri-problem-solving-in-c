#include<stdio.h>

int main()
{
    double a, b, d;
    char ch='%';

    scanf("%lf %lf", &a, &b);

    d = b - a;             //increase = new - old
    d = (d/a)*100.0;      //percentage = (increase/old)*100

    printf("%.2lf%c\n", d, ch);

    return 0;
}
