#include<stdio.h>

int main()
{
    int n;
    double f, d, e, s;

    scanf("%d", &n);

    s = sqrt(5);
    d = pow(((1+s)/2),n);
    e = pow(((1-s)/2),n);

    f = (d-e)/s;

    printf("%.1lf\n", f);

    return 0;
}

