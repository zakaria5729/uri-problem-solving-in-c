//cylinder base area formula, a =(pi*r^2)
//cylinder height formula, h = v/a

#include<stdio.h>
#define pi 3.14

int main()
{
    double v, d, a, h, r;

    while(scanf("%lf %lf", &v, &d) != EOF)
    {
        r = d/2;
        a = pi*r*r;
        h = v/a;

        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", a);
    }

    return 0;
}
